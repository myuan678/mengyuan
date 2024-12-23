class icache_down_transaction;
    import toy_pack::*;

    pc_req_t                            txreq;
    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]  entry_id;

    function copy_to(output icache_down_transaction pkt);
        pkt = new this;
    endfunction

endclass:icache_down_transaction



