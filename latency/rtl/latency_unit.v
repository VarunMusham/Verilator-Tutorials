`timescale 1ns/1ps
// Multi-datatype unit: every datatype has its own pipeline with its own latency.
//   in_dtype 0 = INT8  -> response LAT8  cycles after the request
//   in_dtype 1 = INT16 -> response LAT16 cycles after the request
//   in_dtype 2 = INT32 -> response LAT32 cycles after the request
//   in_dtype 3 = unused (request ignored)
// Each lane computes out = in + 1, truncated to the datatype width.
// Each datatype has its own response port, so responses can complete out of issue order.
module latency_unit #(
    parameter integer LAT8  = 2,
    parameter integer LAT16 = 5,
    parameter integer LAT32 = 9
) (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        in_valid,
    input  wire [1:0]  in_dtype,
    input  wire [31:0] in_data,
    output wire        out8_valid,
    output wire [7:0]  out8_data,
    output wire        out16_valid,
    output wire [15:0] out16_data,
    output wire        out32_valid,
    output wire [31:0] out32_data
);
    lat_lane #(.W(8), .LAT(LAT8)) u_int8 (
        .clk      (clk),
        .rst_n    (rst_n),
        .in_valid (in_valid && (in_dtype == 2'd0)),
        .in_data  (in_data[7:0]),
        .out_valid(out8_valid),
        .out_data (out8_data)
    );

    lat_lane #(.W(16), .LAT(LAT16)) u_int16 (
        .clk      (clk),
        .rst_n    (rst_n),
        .in_valid (in_valid && (in_dtype == 2'd1)),
        .in_data  (in_data[15:0]),
        .out_valid(out16_valid),
        .out_data (out16_data)
    );

    lat_lane #(.W(32), .LAT(LAT32)) u_int32 (
        .clk      (clk),
        .rst_n    (rst_n),
        .in_valid (in_valid && (in_dtype == 2'd2)),
        .in_data  (in_data),
        .out_valid(out32_valid),
        .out_data (out32_data)
    );
endmodule
