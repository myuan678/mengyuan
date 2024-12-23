class down_transaction ;
    rand pc_req_t                           down_pld;
    rand bit [MSHR_ENTRY_INDEX_WIDTH-1:0]   down_idx;


    function void display(input string msg= "");
        $display("%sDisplay Trans Messsage",msg);
        $display("%10s:%20b","tag",pld.addr.tag);
        $display("%10s:%20b","index",pld.addr.index);
        $display("%10s:%20b","offset",pld.addr.offset);
        $display("%10s:%20b","opcode",pld.opcode);
        $display("%10s:%20b","txnid",pld.txnid);
        $display("%10s:%20b","down_entry_idx",down_idx);
    endfunction

    function copy_to(output up_transcation trans);
        trans = new this;
    endfunction


endclass: down_transaction