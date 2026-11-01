module tb;
    logic       clk;
    logic       rst_n;
    logic       en;
    logic [3:0] count;

    counter #(.WIDTH(4)) dut (
        .clk  (clk),
        .rst_n(rst_n),
        .en   (en),
        .count(count)
    );

    initial begin
        clk = 0;
        rst_n = 0;
        en = 0;
    end

    always #5 clk = ~clk;

    initial begin
        #22 rst_n = 1;
        en = 1;
        repeat (20) @(posedge clk);
        #1;  // let the nonblocking update from the last edge settle
        // 20 increments of a 4-bit counter -> 20 mod 16 = 4
        $display("final count = %0d (expected 4)", count);
        if (count !== 4'd4) $fatal(1, "count mismatch: got %0d", count);
        $display("PASS");
        $finish;
    end
endmodule
