`timescale 1ns/1ps
// Memory controller with three transaction types, each with its own latency:
//   req_type 0 = READ     returns mem[addr] on the read-data channel after LAT_RD cycles
//   req_type 1 = WRITE    mem[addr] = wdata; write ack (with the address) after LAT_WR cycles
//   req_type 2 = RMW_ADD  mem[addr] += wdata (atomic); returns the old value after LAT_RMW cycles
//   req_type 3 = unused (request ignored)
// Memory is updated when a request is accepted (cycle c), so reads see every earlier request.
// Each response type has its own channel (like AXI R and B), so responses can finish out of order.
module mem_ctrl #(
    parameter integer LAT_RD  = 4,
    parameter integer LAT_WR  = 2,
    parameter integer LAT_RMW = 6,
    parameter integer AW      = 8          // address bits: 2**AW words
) (
    input  wire          clk,
    input  wire          rst_n,
    input  wire          req_valid,
    input  wire [1:0]    req_type,
    input  wire [AW-1:0] req_addr,
    input  wire [31:0]   req_wdata,
    output wire          rd_valid,         // read-data channel
    output wire [31:0]   rd_data,
    output wire          wr_valid,         // write-ack channel
    output wire [AW-1:0] wr_addr,
    output wire          rmw_valid,        // RMW response channel
    output wire [31:0]   rmw_old
);
    reg [31:0] mem [0:(1<<AW)-1];

    integer k;
    initial begin
        for (k = 0; k < (1<<AW); k = k + 1)
            mem[k] = 32'd0;
    end

    wire is_rd  = req_valid && (req_type == 2'd0);
    wire is_wr  = req_valid && (req_type == 2'd1);
    wire is_rmw = req_valid && (req_type == 2'd2);

    wire [31:0] cur = mem[req_addr];      // value as of this request (before this edge's update)

    always @(posedge clk) begin
        if (is_wr)  mem[req_addr] <= req_wdata;
        if (is_rmw) mem[req_addr] <= cur + req_wdata;
    end

    lat_pipe #(.W(32), .LAT(LAT_RD)) u_rd (
        .clk(clk), .rst_n(rst_n),
        .in_valid(is_rd), .in_data(cur),
        .out_valid(rd_valid), .out_data(rd_data)
    );

    lat_pipe #(.W(AW), .LAT(LAT_WR)) u_wr (
        .clk(clk), .rst_n(rst_n),
        .in_valid(is_wr), .in_data(req_addr),
        .out_valid(wr_valid), .out_data(wr_addr)
    );

    lat_pipe #(.W(32), .LAT(LAT_RMW)) u_rmw (
        .clk(clk), .rst_n(rst_n),
        .in_valid(is_rmw), .in_data(cur),
        .out_valid(rmw_valid), .out_data(rmw_old)
    );
endmodule
