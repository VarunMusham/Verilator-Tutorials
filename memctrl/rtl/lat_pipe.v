`timescale 1ns/1ps
// Generic LAT-cycle delay line (LAT >= 1) carrying a valid bit and W bits of data.
// A value applied in cycle c appears on the output in cycle c+LAT.
module lat_pipe #(
    parameter integer W   = 32,
    parameter integer LAT = 1
) (
    input  wire         clk,
    input  wire         rst_n,             // active-low asynchronous reset (valid path only)
    input  wire         in_valid,
    input  wire [W-1:0] in_data,
    output wire         out_valid,
    output wire [W-1:0] out_data
);
    wire [LAT:0]         vch;              // vch[0] = input, vch[LAT] = output
    wire [(LAT+1)*W-1:0] dch;

    assign vch[0]     = in_valid;
    assign dch[W-1:0] = in_data;

    genvar g;
    generate
        for (g = 0; g < LAT; g = g + 1) begin : g_stage
            reg         v_q;
            reg [W-1:0] d_q;

            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) v_q <= 1'b0;
                else        v_q <= vch[g];
            end

            always @(posedge clk) begin
                d_q <= dch[g*W +: W];
            end

            assign vch[g+1]          = v_q;
            assign dch[(g+1)*W +: W] = d_q;
        end
    endgenerate

    assign out_valid = vch[LAT];
    assign out_data  = dch[LAT*W +: W];
endmodule
