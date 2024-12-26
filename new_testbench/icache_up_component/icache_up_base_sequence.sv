class icache_up_base_sequence;
    import toy_pack::*;
    icache_cfg          cfg                     ;
    mailbox             drv_mbx                 ;
    event               drv_send_done           ;
    int                 file                    ;
    int                 read_bytes              ;
    int    cnt=0;
    typedef struct packed {
        logic [ICACHE_TAG_WIDTH-1:0]    tag     ;
        logic [ICACHE_INDEX_WIDTH-1:0]  index   ;
        logic [ICACHE_OFFSET_WIDTH-1:0] offset  ;
    } addr_t;
    addr_t    data_buffer                       ;

    //rand bit txnid;

    function new();
        cfg = new();  
    endfunction

    virtual task base_seq(int num=10);
      for (int i = 0; i < num; i++) begin
        icache_up_transaction up_trans = new;
        up_trans.randomize();
        $display("[UP_SEQ] base seq transaction random start");
        if(cfg.debug_en) $display ("T=%0t [UP_SEQUENCE] ITEM NUM :%0d/%0d create next transaction", $time, i+1, num);
        up_trans.delay = 0;
        drv_mbx.put(up_trans);
        cnt++;
        $display("counter=%d", cnt);
      end
      $display ("T=%0t [UP_SEQUENCE] Done generation of %0d transactions", $time, num);
    endtask


endclass
