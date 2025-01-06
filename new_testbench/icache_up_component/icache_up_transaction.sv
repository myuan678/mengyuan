class icache_up_transaction;
  import toy_pack::*;
 //transaction
    icache_cfg                                  cfg   ;
    rand bit  [ICACHE_TAG_WIDTH-1       :0]  	  tag   ;
    rand bit  [ICACHE_INDEX_WIDTH-1     :0] 	  index ;
    rand bit  [ICACHE_OFFSET_WIDTH-1    :0]     offset;
    bit       [ICACHE_REQ_TXNID_WIDTH-1 :0] 	  txnid ;
    rand bit  [ICACHE_REQ_OPCODE_WIDTH-1:0]     opcode;

  //control
    rand int                                    delay ;

    constraint delay_range{
        delay inside{[1:10]};
    }
    //constraint tag_range{
    //  tag inside {[3000:10000]};
    //}
    //constraint index_range{
    //  index inside {[1:100]};
    //}

    constraint opcode_type{
      //opcode inside{[1:2]};
      opcode == 5'd2;
    }


    function void display(input string msg= "");
        $display("%sDisplay Trans Messsage",msg);
        $display("%10s:%20b","tag",tag);
        $display("%10s:%20b","index",index);
        $display("%10s:%20b","offset",offset);
        $display("%10s:%20b","opcode",opcode);
        $display("%10s:%20b","txnid",txnid);
    endfunction

 

endclass


class pld_packet;
    import toy_pack::*;
    req_addr_t    addr;
    bit [255:0]   data;
    bit [3  :0]   txnid;
    bit [4  :0]   opcode;
    time          send_time;
    time          recv_time;

    function copy_to(output pld_packet pld_pkt);
        pld_pkt = new this;
    endfunction

endclass





