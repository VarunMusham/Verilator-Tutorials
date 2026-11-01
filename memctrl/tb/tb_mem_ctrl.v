`timescale 1ns/1ps
// Transaction latency test for mem_ctrl (RTL level).
//
// READ, WRITE and RMW_ADD each have their own latency. A golden memory model is updated in
// issue order, and each request's expected response is recorded when it is issued:
//   READ   -> expected data = golden mem[addr] at issue,     on the read-data channel
//   WRITE  -> expected ack  = addr,                          on the write-ack channel
//   RMW    -> expected value = golden mem[addr] (old) at issue, on the RMW channel
// Every response must match the oldest outstanding request on its channel (in order per type),
// carry the expected value, and arrive exactly LAT cycles after the request.
// Latency is counted from the negedge that drives the request (cycle c) to the negedge that
// observes the response (cycle c+LAT).
/* verilator lint_off UNUSEDSIGNAL */
module tb_mem_ctrl;
    localparam integer NCYC    = 800;
    localparam integer AW      = 8;
    localparam integer LAT_RD  = 4;        // must match the DUT parameters below
    localparam integer LAT_WR  = 2;
    localparam integer LAT_RMW = 6;

    localparam integer T_RD  = 0;          // transaction / channel index
    localparam integer T_WR  = 1;
    localparam integer T_RMW = 2;

    reg          clk;
    reg          rst_n;
    reg          req_valid;
    reg  [1:0]   req_type;
    reg  [AW-1:0] req_addr;
    reg  [31:0]  req_wdata;
    wire         rd_valid, wr_valid, rmw_valid;
    wire [31:0]  rd_data, rmw_old;
    wire [AW-1:0] wr_addr;

    mem_ctrl #(.LAT_RD(LAT_RD), .LAT_WR(LAT_WR), .LAT_RMW(LAT_RMW), .AW(AW)) dut (
        .clk      (clk),
        .rst_n    (rst_n),
        .req_valid(req_valid),
        .req_type (req_type),
        .req_addr (req_addr),
        .req_wdata(req_wdata),
        .rd_valid (rd_valid),
        .rd_data  (rd_data),
        .wr_valid (wr_valid),
        .wr_addr  (wr_addr),
        .rmw_valid(rmw_valid),
        .rmw_old  (rmw_old)
    );

    initial clk = 1'b0;
    always #5 clk = ~clk;

    // ---------------- request schedule ----------------
    reg          s_valid [0:NCYC-1];
    reg [1:0]    s_type  [0:NCYC-1];
    reg [AW-1:0] s_addr  [0:NCYC-1];
    reg [31:0]   s_wdata [0:NCYC-1];

    // ---------------- golden memory ----------------
    reg [31:0]   gold [0:(1<<AW)-1];

    // ---------------- scoreboard: one FIFO per channel ----------------
    integer    q_cyc [0:3*NCYC-1];
    reg [31:0] q_val [0:3*NCYC-1];
    integer    head  [0:2];
    integer    tail  [0:2];

    integer    lat_cnt [0:2];
    integer    lat_min [0:2];
    integer    lat_max [0:2];
    integer    lat_sum [0:2];
    integer    errors;
    integer    i, cyc, pick;
    reg [31:0] rnd, rnd2;

    function integer lat_of(input integer tt);
        lat_of = (tt == T_RD) ? LAT_RD : (tt == T_WR) ? LAT_WR : LAT_RMW;
    endfunction

    task sched(input integer c, input integer ty, input integer a, input [31:0] d);
        begin
            s_valid[c] = 1'b1;
            s_type[c]  = ty[1:0];
            s_addr[c]  = a[AW-1:0];
            s_wdata[c] = d;
        end
    endtask

    task push(input integer tt, input [31:0] v, input integer now);
        integer idx;
        begin
            idx = tt*NCYC + tail[tt];
            q_cyc[idx] = now;
            q_val[idx] = v;
            tail[tt]   = tail[tt] + 1;
        end
    endtask

    // Issue a request: update the golden model and queue the expected response.
    task issue(input integer ty, input integer a, input [31:0] d, input integer now);
        begin
            if (ty == T_RD) begin
                push(T_RD, gold[a], now);
            end else if (ty == T_WR) begin
                gold[a] = d;
                push(T_WR, a, now);
            end else begin
                push(T_RMW, gold[a], now);     // expected: old value
                gold[a] = gold[a] + d;
            end
        end
    endtask

    task observe(input integer tt, input [31:0] got, input integer now);
        integer idx, lat;
        begin
            if (head[tt] == tail[tt]) begin
                errors = errors + 1;
                $display("ERROR: spurious response on channel %0d at cycle %0d", tt, now);
            end else begin
                idx = tt*NCYC + head[tt];
                head[tt] = head[tt] + 1;
                lat = now - q_cyc[idx];

                if (got !== q_val[idx]) begin
                    errors = errors + 1;
                    $display("ERROR: channel %0d got 0x%08h, expected 0x%08h (issued cycle %0d)",
                             tt, got, q_val[idx], q_cyc[idx]);
                end
                if (lat != lat_of(tt)) begin
                    errors = errors + 1;
                    $display("ERROR: channel %0d latency %0d cycles, expected %0d",
                             tt, lat, lat_of(tt));
                end

                if (q_cyc[idx] < 200)
                    $display("  %s issued %0d -> response %0d  latency %0d  value 0x%08h",
                             (tt == T_RD) ? "READ " : (tt == T_WR) ? "WRITE" : "RMW  ",
                             q_cyc[idx], now, lat, got);

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
        for (i = 0; i < (1<<AW); i = i + 1)
            gold[i] = 32'd0;
        for (i = 0; i < NCYC; i = i + 1)
            s_valid[i] = 1'b0;

        // Scenario 1: isolated transactions on one address
        //   WRITE 0xCAFE @10 (ack +2), READ @20 (+4), RMW +0x10 @30 (old 0xCAFE, +6), READ @40 (0xCB0E)
        sched(10, T_WR,  5, 32'h0000CAFE);
        sched(20, T_RD,  5, 32'h0);
        sched(30, T_RMW, 5, 32'h00000010);
        sched(40, T_RD,  5, 32'h0);

        // Scenario 2: read-after-write to the same address while the write ack is still pending.
        //   the READ must see the newly written value
        sched(60, T_WR, 7, 32'h00001111);
        sched(61, T_RD, 7, 32'h0);
        sched(62, T_WR, 7, 32'h00002222);
        sched(63, T_RD, 7, 32'h0);

        // Scenario 3: mixed transactions on consecutive cycles -> out-of-order responses
        //   RMW @80 completes at 86, READ @81 at 85, WRITE @82 at 84:
        //   responses come back in the reverse order of issue.
        sched(80, T_RMW, 9,  32'd5);
        sched(81, T_RD,  9,  32'h0);
        sched(82, T_WR,  10, 32'h0000ABCD);

        // Scenario 4: back-to-back writes, then back-to-back reads (pipelined, 1 per cycle)
        for (i = 0; i < 8; i = i + 1)
            sched(100 + i, T_WR, i, 32'h00000100 + i);
        for (i = 0; i < 8; i = i + 1)
            sched(110 + i, T_RD, i, 32'h0);

        // Scenario 5: random mix over 16 addresses, ~60% of cycles carry a request
        //   READ 40%, WRITE 35%, RMW 25%
        for (i = 200; i < 700; i = i + 1) begin
            rnd = $urandom;
            if ((rnd % 100) < 60) begin
                rnd2 = $urandom;
                pick = rnd2 % 100;
                sched(i, (pick < 40) ? T_RD : (pick < 75) ? T_WR : T_RMW,
                      (rnd2 >> 8) % 16, $urandom);
            end
        end

        rst_n     = 1'b0;
        req_valid = 1'b0;
        req_type  = 2'd0;
        req_addr  = {AW{1'b0}};
        req_wdata = 32'd0;
        repeat (3) @(negedge clk);
        rst_n = 1'b1;

        $display("Directed transactions (issue cycle < 200):");
        for (cyc = 0; cyc < NCYC + LAT_RMW + 2; cyc = cyc + 1) begin
            @(negedge clk);

            // observe responses valid in this cycle
            if (rd_valid)  observe(T_RD,  rd_data,         cyc);
            if (wr_valid)  observe(T_WR,  {24'd0, wr_addr}, cyc);
            if (rmw_valid) observe(T_RMW, rmw_old,         cyc);

            // drive this cycle's request (sampled by the next rising edge)
            if (cyc < NCYC && s_valid[cyc]) begin
                req_valid = 1'b1;
                req_type  = s_type[cyc];
                req_addr  = s_addr[cyc];
                req_wdata = s_wdata[cyc];
                issue({30'd0, s_type[cyc]}, {24'd0, s_addr[cyc]}, s_wdata[cyc], cyc);
            end else begin
                req_valid = 1'b0;
            end
        end

        for (i = 0; i < 3; i = i + 1)
            if (head[i] != tail[i]) begin
                errors = errors + 1;
                $display("ERROR: %0d responses missing on channel %0d", tail[i] - head[i], i);
            end

        $display("");
        $display("Latency summary (cycles): txn    count  min  avg  max  spec");
        for (i = 0; i < 3; i = i + 1)
            $display("  %s  %6d  %3d  %3d  %3d  %3d",
                     (i == T_RD) ? "READ " : (i == T_WR) ? "WRITE" : "RMW  ",
                     lat_cnt[i], lat_min[i],
                     (lat_cnt[i] > 0) ? lat_sum[i] / lat_cnt[i] : 0,
                     lat_max[i], lat_of(i));

        if (errors == 0) $display("PASS: all transactions correct and at the specified latency");
        else             $fatal(1, "FAIL: %0d errors", errors);
        $finish;
    end
endmodule
