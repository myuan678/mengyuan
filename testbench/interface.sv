//interface icache_if();
interface icache_if(input logic clk, input logic rst_n);

import toy_pack::*;

////logic                                        clk                         ;
////logic                                        rst_n                       ;
//logic                                        prefetch_enable             ;
//
////upstream txdat  out
//logic [ICACHE_UPSTREAM_DATA_WIDTH-1:0]       upstream_txdat_data         ;
//logic                                        upstream_txdat_vld          ;
////logic                                        upstream_txdat_rdy          ;
//logic [ICACHE_REQ_TXNID_WIDTH-1:0]           upstream_txdat_txnid        ;
//
////upstream rxreq
//logic                                        upstream_rxreq_vld          ;
//logic                                        upstream_rxreq_rdy          ;
//pc_req_t                                     upstream_rxreq_pld          ;
//
////downstream rxsnp
//logic                                        downstream_rxsnp_vld        ;
//logic                                        downstream_rxsnp_rdy        ;
//pc_req_t                                     downstream_rxsnp_pld        ;
//
////downtream txreq
//logic                                        downstream_txreq_vld        ;
//logic                                        downstream_txreq_rdy        ;
//pc_req_t                                     downstream_txreq_pld        ;
//logic [MSHR_ENTRY_INDEX_WIDTH-1:0]           downstream_txreq_entry_id   ;
//
////downstream txrsp
////logic                                        downstream_txrsp_vld        ;
//logic                                        downstream_txrsp_rdy        ;
////logic [ICACHE_REQ_OPCODE_WIDTH-1:0]          downstream_txrsp_opcode     ;
//
////downstream rxdat  in
//logic                                        downstream_rxdat_vld        ;
//logic                                        downstream_rxdat_rdy        ;
//downstream_rxdat_t                           downstream_rxdat_pld        ;
//
//
//logic                                         prefetch_req_vld;
//pc_req_t                                      prefetch_req_pld;
//logic                                        pref_to_mshr_req_rdy;






//logic                                        clk                        ;
//logic                                        rst_n                      ;
logic                                        prefetch_enable            ;
logic [ICACHE_UPSTREAM_DATA_WIDTH-1 :0]      upstream_txdat_data        ;
logic                                        upstream_txdat_vld         ;
logic [ICACHE_REQ_TXNID_WIDTH-1     :0]      upstream_txdat_txnid       ;
logic                                        upstream_rxreq_vld         ;
logic                                        upstream_rxreq_rdy         ;
pc_req_t                                     upstream_rxreq_pld         ;
logic                                        downstream_rxsnp_vld       ;
logic                                        downstream_rxsnp_rdy       ;
pc_req_t                                     downstream_rxsnp_pld       ;
logic                                        downstream_txreq_vld       ;
logic                                        downstream_txreq_rdy       ;
pc_req_t                                     downstream_txreq_pld       ;
logic [MSHR_ENTRY_INDEX_WIDTH-1      :0]     downstream_txreq_entry_id  ;
logic                                        downstream_txrsp_rdy       ;
logic                                        downstream_rxdat_vld       ;
logic                                        downstream_rxdat_rdy       ;
downstream_rxdat_t                           downstream_rxdat_pld       ;
logic                                         prefetch_req_vld          ;   
pc_req_t                                      prefetch_req_pld          ;   
logic                                        pref_to_mshr_req_rdy       ;


endinterface