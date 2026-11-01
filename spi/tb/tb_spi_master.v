`timescale 1ns/1ps
// Self-checking Verilog testbench for spi_master (RTL sanity check before SystemC conversion).
module tb_spi_master;
    reg        clk;
    reg        rst_n = 1'b0;
    reg        start = 1'b0;
    reg  [7:0] tx_data = 8'd0;
    wire [7:0] rx_data;
    wire       busy, done, sclk, mosi, cs_n;
    reg        miso;

    integer    errors = 0;
    integer    timeout;

    spi_master #(.CLK_DIV(4)) dut (
        .clk    (clk),
        .rst_n  (rst_n),
        .start  (start),
        .tx_data(tx_data),
        .rx_data(rx_data),
        .busy   (busy),
        .done   (done),
        .sclk   (sclk),
        .mosi   (mosi),
        .miso   (miso),
        .cs_n   (cs_n)
    );

    initial begin
        clk  = 1'b0;
        miso = 1'b0;
    end

    always #5 clk = ~clk;

    // ---------------- behavioural SPI slave (mode 0) ----------------
    // Blocking assignments are intentional here: this is a sequential model, not RTL.
    /* verilator lint_off BLKSEQ */
    reg [7:0] slave_tx;            // byte the slave returns
    reg [7:0] slave_rx;            // byte the slave received
    integer   slave_bit;           // falling-edge index within the transfer
    integer   sclk_rises;          // SCLK rising edges seen in this transfer

    always @(negedge cs_n) begin
        slave_bit  = 0;
        sclk_rises = 0;
        slave_rx   = 8'd0;
        miso       = slave_tx[7];
    end

    always @(posedge sclk) begin
        if (!cs_n) begin
            slave_rx   = {slave_rx[6:0], mosi};
            sclk_rises = sclk_rises + 1;
        end
    end

    always @(negedge sclk) begin
        if (!cs_n) begin
            slave_bit = slave_bit + 1;
            if (slave_bit < 8)
                miso = slave_tx[7 - slave_bit];
        end
    end
    /* verilator lint_on BLKSEQ */

    // ---------------- one transfer with checks ----------------
    task automatic xfer(input [7:0] tx, input [7:0] stx);
        begin
            slave_tx = stx;
            @(negedge clk);
            tx_data = tx;
            start   = 1'b1;
            @(negedge clk);
            start   = 1'b0;
            if (!busy) begin
                errors = errors + 1;
                $display("ERROR: busy not asserted after start");
            end

            timeout = 0;
            while (!done) begin
                @(negedge clk);
                timeout = timeout + 1;
                if (timeout > 1000) begin
                    errors = errors + 1;
                    $display("ERROR: timeout waiting for done");
                    $finish;
                end
            end

            if (rx_data !== stx) begin
                errors = errors + 1;
                $display("ERROR: master rx 0x%02h, expected 0x%02h", rx_data, stx);
            end
            if (slave_rx !== tx) begin
                errors = errors + 1;
                $display("ERROR: slave rx 0x%02h, expected 0x%02h", slave_rx, tx);
            end
            if (sclk_rises !== 8) begin
                errors = errors + 1;
                $display("ERROR: %0d SCLK rising edges, expected 8", sclk_rises);
            end
            if (cs_n !== 1'b1 || busy !== 1'b0) begin
                errors = errors + 1;
                $display("ERROR: cs_n/busy not released after done");
            end
            $display("xfer tx=0x%02h slave_tx=0x%02h -> master rx=0x%02h slave rx=0x%02h",
                     tx, stx, rx_data, slave_rx);
        end
    endtask

    integer i;
    reg [7:0]  rnd_tx, rnd_stx;
    initial begin
        repeat (3) @(negedge clk);
        rst_n = 1'b1;
        @(negedge clk);

        xfer(8'hA5, 8'h5A);
        xfer(8'h3C, 8'hC3);
        xfer(8'hFF, 8'h00);
        xfer(8'h00, 8'hFF);
        xfer(8'h01, 8'h80);
        for (i = 0; i < 20; i = i + 1) begin
            rnd_tx  = 8'($urandom);
            rnd_stx = 8'($urandom);
            xfer(rnd_tx, rnd_stx);
        end

        repeat (5) @(negedge clk);
        if (errors == 0) $display("PASS: all SPI transfers correct");
        else             $fatal(1, "FAIL: %0d errors", errors);
        $finish;
    end
endmodule
