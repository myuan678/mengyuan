class up_transcation;
    rand  pc_req_t                  pld ;



    function void print(string tag="");
        $display ("T=%0t %s pld=0x%0h ", $time, pld);
    endfunction

    constraint pld_is_upreq{
        pld.opcode == 5'd2;
    }
    //constraint pld_is_downsnp{
    //    pld.opcode == 5'd1;
    //}

    function void display(input string msg= "");
        $display("%sDisplay Trans Messsage",msg);
        $display("%10s:%20b","tag",pld.addr.tag);
        $display("%10s:%20b","index",pld.addr.index);
        $display("%10s:%20b","offset",pld.addr.offset);
        $display("%10s:%20b","opcode",pld.opcode);
        $display("%10s:%20b","txnid",pld.txnid);
    endfunction

    function copy_to(output up_transcation trans);
        trans = new this;
    endfunction


    //function void copy(Packet tmp_pld);
    //    this.pld = tmp_pld;
    //endfunction


endclass:up_transcation
