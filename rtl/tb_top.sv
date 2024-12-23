module icache_tb_top(
    input logic clk,
    input logic rst_n
);
import toy_pack::*;

icache_if    vif();
//assign vif.clk = clk;
//assign vif.rst_n = rst_n;

logic  clk_0;
logic rst_n_0;
assign clk_0 = clk;
assign rst_n_0 = rst_n;

test         t0;

initial begin
    $display("clk: %b, rst_n: %b", clk, rst_n);
    vif.prefetch_enable        = 1'b0;
    vif.upstream_txdat_data    = 'b0;
    vif.upstream_txdat_vld     = 'b0;
    vif.upstream_txdat_txnid   = 'b0;
    vif.downstream_rxsnp_vld   = 0;
    vif.downstream_rxsnp_pld    = 'b0;
    vif.downstream_rxsnp_rdy    = 'b0;

    vif.downstream_txreq_rdy   = 1'b1;
    vif.downstream_txreq_vld    = 'b0;
    vif.downstream_txreq_pld    = 'b0;
    vif.downstream_txreq_entry_id = 'b0;

    vif.upstream_rxreq_vld     = 'b0;
    vif.upstream_rxreq_rdy     = 'b0;
    vif.upstream_rxreq_pld     = 'b0;

    //vif.downstream_rxsnp_vld   = 'b0;
    //vif.downstream_rxsnp_pld   = 'b0;
    //vif.downstream_rxsnp_rdy   = 'b0;

    vif.downstream_rxdat_vld   = 'b0;
    vif.downstream_rxdat_pld   = 'b0;
    vif.downstream_rxdat_rdy   = 'b0;
    //vif.upstream_txdat_rdy     = 1'b1;
    vif.downstream_txrsp_rdy   = 'b1;

	//clk             = 0   ;
 	//rst_n           = 1   ;
	//#100 rst_n      = 0   ;
    //#100 rst_n      = 1   ;
	//forever #10 clk = ~clk;
end
//
initial begin
    $display("Creating test object...");
    t0         = new;
    $display("Test object created.");
    t0.req.vif = vif;
    t0.ddr.vif = vif;
    t0.sb.vif  = vif;
    t0.run();
end
//
initial begin
    #300000;
    $display("checkde");
    t0.sb.final_check();
    $finish;
end

icache_top      dut(
    .clk                        (clk_0                        ),        
    .rst_n                      (rst_n_0                       ),        
    .prefetch_enable            (vif.prefetch_enable          ),        
    .upstream_rxreq_vld         (vif.upstream_rxreq_vld       ),
    .upstream_rxreq_rdy         (vif.upstream_rxreq_rdy       ),
    .upstream_rxreq_pld         (vif.upstream_rxreq_pld       ),
    .downstream_rxsnp_vld       (vif.downstream_rxsnp_vld     ),
    .downstream_rxsnp_rdy       (vif.downstream_rxsnp_rdy     ),
    .downstream_rxsnp_pld       (vif.downstream_rxsnp_pld     ),
    .downstream_txreq_vld       (vif.downstream_txreq_vld     ),
    .downstream_txreq_rdy       (vif.downstream_txreq_rdy     ),
    .downstream_txreq_pld       (vif.downstream_txreq_pld     ),
    .downstream_txreq_entry_id  (vif.downstream_txreq_entry_id),
    .downstream_txrsp_rdy       (vif.downstream_txrsp_rdy     ),
    .downstream_rxdat_vld       (vif.downstream_rxdat_vld     ),
    .downstream_rxdat_rdy       (vif.downstream_rxdat_rdy     ),
    .downstream_rxdat_pld       (vif.downstream_rxdat_pld     ),
    .prefetch_req_vld           (vif.prefetch_req_vld         ),
    .prefetch_req_pld           (vif.prefetch_req_pld         ),
    .pref_to_mshr_req_rdy       (vif.pref_to_mshr_req_rdy     ));

endmodule