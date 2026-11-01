`timescale 1ns/1ps
// Simple SPI master: mode 0 (CPOL=0, CPHA=0), MSB first, 8-bit words.
// SCLK toggles every CLK_DIV system clocks, so one SPI bit lasts 2*CLK_DIV clocks.
// Transfer: start -> CS_N low -> 8 SCLK cycles -> CS_N high -> done pulse.
module spi_master #(
    parameter integer CLK_DIV = 4          // system clocks per SCLK half-period (>= 1)
) (
    input  wire       clk,
    input  wire       rst_n,               // active-low asynchronous reset
    input  wire       start,               // one-cycle pulse to begin a transfer (ignored while busy)
    input  wire [7:0] tx_data,             // byte to send, latched on start
    output reg  [7:0] rx_data,             // byte received, valid when done is high
    output reg        busy,                // high from start until the transfer completes
    output reg        done,                // one-cycle pulse when a transfer completes
    output reg        sclk,                // SPI clock
    output reg        mosi,                // master out, slave in
    input  wire       miso,                // master in, slave out
    output reg        cs_n                 // active-low chip select
);
    localparam integer CNT_W = (CLK_DIV > 1) ? $clog2(CLK_DIV) : 1;

    reg [CNT_W-1:0] div_cnt;               // system-clock divider
    reg [7:0]       tx_shift;              // remaining bits to send (MSB is next)
    reg [7:0]       rx_shift;              // bits received so far
    reg [3:0]       edge_cnt;              // SCLK rising edges seen in this transfer

    localparam [31:0]      DIV_MAX_32 = CLK_DIV - 1;
    localparam [CNT_W-1:0] DIV_MAX    = DIV_MAX_32[CNT_W-1:0];
    wire half_tick = (div_cnt == DIV_MAX);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            busy     <= 1'b0;
            done     <= 1'b0;
            sclk     <= 1'b0;
            mosi     <= 1'b0;
            cs_n     <= 1'b1;
            rx_data  <= 8'd0;
            div_cnt  <= {CNT_W{1'b0}};
            tx_shift <= 8'd0;
            rx_shift <= 8'd0;
            edge_cnt <= 4'd0;
        end else begin
            done <= 1'b0;

            if (!busy) begin
                if (start) begin
                    busy     <= 1'b1;
                    cs_n     <= 1'b0;
                    mosi     <= tx_data[7];        // first bit must be stable before the first rising edge
                    tx_shift <= {tx_data[6:0], 1'b0};
                    div_cnt  <= {CNT_W{1'b0}};
                    edge_cnt <= 4'd0;
                end
            end else if (half_tick) begin
                div_cnt <= {CNT_W{1'b0}};
                sclk    <= ~sclk;

                if (!sclk) begin
                    // rising edge: sample MISO (slave changed it on the previous falling edge)
                    rx_shift <= {rx_shift[6:0], miso};
                    edge_cnt <= edge_cnt + 4'd1;
                end else if (edge_cnt == 4'd8) begin
                    // falling edge after the eighth bit: end the transfer
                    busy    <= 1'b0;
                    done    <= 1'b1;
                    cs_n    <= 1'b1;
                    rx_data <= rx_shift;
                end else begin
                    // falling edge: present the next MOSI bit
                    mosi     <= tx_shift[7];
                    tx_shift <= {tx_shift[6:0], 1'b0};
                end
            end else begin
                div_cnt <= div_cnt + 1'b1;
            end
        end
    end
endmodule
