`timescale 1ns/1ps
// Latency test for latency_unit (RTL level).
//
// Every request is scoreboarded when it is issued. When a response appears on its
// datatype's port, it must:
//   - match the oldest outstanding request of that datatype (in-order per datatype),
//   - carry the expected data (in+1, truncated to the datatype width),
//   - arrive exactly LAT[datatype] cycles after the request.
// Latency is counted in clock cycles, using the negedge at which the request is driven
// (cycle c) and the negedge at which the response is observed (cycle c+LAT).
/* verilator lint_off UNUSEDSIGNAL */   // integer task/function arguments are wider than needed
module tb_latency_unit;
    localparam integer NCYC  = 800;
    localparam integer LAT8  = 2;          // must match the DUT parameters below
    localparam integer LAT16 = 5;
    localparam integer LAT32 = 9;

    reg         clk;
    reg         rst_n;
    reg         in_valid;
    reg  [1:0]  in_dtype;
    reg  [31:0] in_data;
    wire        out8_valid, out16_valid, out32_valid;
    wire [7:0]  out8_data;
    wire [15:0] out16_data;
    wire [31:0] out32_data;

    latency_unit #(.LAT8(LAT8), .LAT16(LAT16), .LAT32(LAT32)) dut (
        .clk        (clk),
        .rst_n      (rst_n),
        .in_valid   (in_valid),
        .in_dtype   (in_dtype),
        .in_data    (in_data),
        .out8_valid (out8_valid),
        .out8_data  (out8_data),
        .out16_valid(out16_valid),
        .out16_data (out16_data),
        .out32_valid(out32_valid),
        .out32_data (out32_data)
    );

    initial clk = 1'b0;
    always #5 clk = ~clk;

    // ---------------- request schedule ----------------
    reg        s_valid [0:NCYC-1];
    reg [1:0]  s_dtype [0:NCYC-1];
    reg [31:0] s_data  [0:NCYC-1];

    // ---------------- scoreboard: one FIFO per datatype ----------------
    integer    iss_cyc [0:3*NCYC-1];
    reg [31:0] iss_exp [0:3*NCYC-1];
    integer    head    [0:2];
    integer    tail    [0:2];

    integer    lat_cnt [0:2];
    integer    lat_min [0:2];
    integer    lat_max [0:2];
    integer    lat_sum [0:2];
    integer    errors;
    integer    i, cyc;
    reg [31:0] rnd;

    function integer lat_of(input integer tt);
        lat_of = (tt == 0) ? LAT8 : (tt == 1) ? LAT16 : LAT32;
    endfunction

    function [31:0] expect_of(input integer tt, input [31:0] d);
        case (tt)
            0:       expect_of = {24'd0, d[7:0]  + 8'd1};
            1:       expect_of = {16'd0, d[15:0] + 16'd1};
            default: expect_of = d + 32'd1;
        endcase
    endfunction

    task sched(input integer c, input integer dt, input [31:0] d);
        begin
            s_valid[c] = 1'b1;
            s_dtype[c] = dt[1:0];
            s_data[c]  = d;
        end
    endtask

    task push(input integer tt, input [31:0] d, input integer now);
        integer idx;
        begin
            idx = tt*NCYC + tail[tt];
            iss_cyc[idx] = now;
            iss_exp[idx] = expect_of(tt, d);
            tail[tt]     = tail[tt] + 1;
        end
    endtask

    task observe(input integer tt, input [31:0] got, input integer now);
        integer idx, lat;
        begin
            if (head[tt] == tail[tt]) begin
                errors = errors + 1;
                $display("ERROR: spurious response on %s at cycle %0d",
                         (tt == 0) ? "INT8" : (tt == 1) ? "INT16" : "INT32", now);
            end else begin
                idx = tt*NCYC + head[tt];
                head[tt] = head[tt] + 1;
                lat = now - iss_cyc[idx];

                if (got !== iss_exp[idx]) begin
                    errors = errors + 1;
                    $display("ERROR: %s data 0x%08h, expected 0x%08h (issued cycle %0d)",
                             (tt == 0) ? "INT8" : (tt == 1) ? "INT16" : "INT32",
                             got, iss_exp[idx], iss_cyc[idx]);
                end
                if (lat != lat_of(tt)) begin
                    errors = errors + 1;
                    $display("ERROR: %s latency %0d cycles, expected %0d",
                             (tt == 0) ? "INT8" : (tt == 1) ? "INT16" : "INT32",
                             lat, lat_of(tt));
                end

                if (iss_cyc[idx] < 200)
                    $display("  %s issued cycle %0d -> response cycle %0d  latency %0d  data 0x%08h",
                             (tt == 0) ? "INT8 " : (tt == 1) ? "INT16" : "INT32",
                             iss_cyc[idx], now, lat, got);

                lat_cnt[tt] = lat_cnt[tt] + 1;
                lat_sum[tt] = lat_sum[tt] + lat;
                if (lat < lat_min[tt]) lat_min[tt] = lat;
                if (lat > lat_max[tt]) lat_max[tt] = lat;
            end
        end
    endtask

    initial begin
        errors = 0;
        for (i = 0; i < 3; i = i + 1) begin
            head[i]    = 0;
            tail[i]    = 0;
            lat_cnt[i] = 0;
            lat_min[i] = 1000000;
            lat_max[i] = 0;
            lat_sum[i] = 0;
        end
        for (i = 0; i < NCYC; i = i + 1)
            s_valid[i] = 1'b0;

        // Scenario 1: one request per datatype, no contention.
        //   each response must arrive exactly LAT cycles later
        sched(10, 0, 32'h0000007F);
        sched(30, 1, 32'h00001234);
        sched(50, 2, 32'hDEADBEEF);

        // Scenario 2: back-to-back INT32 requests (one per cycle, pipelined)
        for (i = 0; i < 8; i = i + 1)
            sched(70 + i, 2, 32'h00000100 + i);

        // Scenario 3: mixed datatypes on consecutive cycles.
        //   INT8 (issued 101) completes at 103, INT16 (102) at 107, INT32 (100) at 109:
        //   responses leave in a different order than they were issued.
        sched(100, 2, 32'h000000A0);
        sched(101, 0, 32'h0000007F);
        sched(102, 1, 32'h0000FFFE);

        // Scenario 4: random mix, ~60% of cycles carry a request
        for (i = 200; i < 700; i = i + 1) begin
            rnd = $urandom;
            if ((rnd % 100) < 60)
                sched(i, (rnd >> 8) % 3, $urandom);
        end

        rst_n    = 1'b0;
        in_valid = 1'b0;
        in_dtype = 2'd0;
        in_data  = 32'd0;
        repeat (3) @(negedge clk);
        rst_n = 1'b1;

        $display("Directed responses (issue cycle < 200):");
        for (cyc = 0; cyc < NCYC + LAT32 + 2; cyc = cyc + 1) begin
            @(negedge clk);

            // observe responses valid in this cycle
            if (out8_valid)  observe(0, {24'd0, out8_data},  cyc);
            if (out16_valid) observe(1, {16'd0, out16_data}, cyc);
            if (out32_valid) observe(2, out32_data,          cyc);

            // drive this cycle's request (sampled by the next rising edge)
            if (cyc < NCYC && s_valid[cyc]) begin
                in_valid = 1'b1;
                in_dtype = s_dtype[cyc];
                in_data  = s_data[cyc];
                push({30'd0, s_dtype[cyc]}, s_data[cyc], cyc);
            end else begin
                in_valid = 1'b0;
            end
        end

        for (i = 0; i < 3; i = i + 1)
            if (head[i] != tail[i]) begin
                errors = errors + 1;
                $display("ERROR: %0d responses missing on datatype %0d", tail[i] - head[i], i);
            end

        $display("");
        $display("Latency summary (cycles): type   count  min  avg  max  spec");
        for (i = 0; i < 3; i = i + 1)
            $display("  %s  %6d  %3d  %3d  %3d  %3d",
                     (i == 0) ? "INT8 " : (i == 1) ? "INT16" : "INT32",
                     lat_cnt[i], lat_min[i],
                     (lat_cnt[i] > 0) ? lat_sum[i] / lat_cnt[i] : 0,
                     lat_max[i], lat_of(i));

        if (errors == 0) $display("PASS: all responses correct and at the specified latency");
        else             $fatal(1, "FAIL: %0d errors", errors);
        $finish;
    end
endmodule
