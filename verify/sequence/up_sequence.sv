class up_sequence;
    up_transaction    icache_up_tran[]           ;  
    int               num                        ;
    icache_cfg        icache_cfg_seq             ;
    function new(input int num,input icache_cfg icache_cfg_in);
        this.icache_up_tran      = new[num]      ; 
        this.num                 = num           ;
        this.icache_cfg_seq      = icache_cfg_in ;
        assert(this.icache_cfg_seq!=null)        ;
        foreach(this.icache_up_tran[i]) begin
            this.icache_up_tran[i] = new()       ;
        end
    endfunction

    function void apply_randomization(input up_transaction trans, input int i);
        if(this.icache_cfg_seq.debug_en) begin
            if (trans.randomize()) begin
                $display("[DEBUG][UP_SEQ] %0t read seq randomization[%d]",$time,i);
            end 
            else begin
                $display("Randomization of transaction %d failed.", i);
            end
        end
    endfunction

    function void read_seq();
        for(int i=0;i<num;i++) begin
            apply_randomization(icache_up_tran[i],i);
            $display("[DEBUG][UP_SEQ] %0t generate seq[%d]",$time,i);
            if(icache_cfg_seq.debug_en) $display("[DEBUG][UP_SEQ] %0t generate seq[%d]",$time,i);
            apply_randomization(icache_up_tran[i],1);
        end
    endfunction
endclass:up_sequence













class up_sequence;
    int 	            num = 10;
    event               drv_done;
    mailbox             drv_mbx;
    icache_cfg          icache_cfg_seq;

    task read_req_seq();
        for (int i = 0; i < num; i++) begin
          up_transcation up_trans_seq = new;
          up_trans_seq.randomize();
          $display ("T=%0t [Sequence] NUM:%0d/%0d create next up_read seq", $time, i+1, num);
          if(icache_cfg_seq.debug_en) $display("[DEBUG][UP_SEQ] %0t generate seq[%d]",$time,i);
          drv_mbx.put(up_trans_seq);
          $display ("T=%0t [Sequence] Wait for driver to be done", $time);
          @(drv_done);
        end
    endtask

    task snp_req_seq();
        for (int i = 0; i < num; i++) begin
          up_transcation snp_trans_seq = new;
          snp_trans_seq.randomize();
          $display ("T=%0t [Sequence] NUM:%0d/%0d create next snp seq", $time, i+1, num);
          if(icache_cfg_seq.debug_en) $display("[DEBUG][UP_SEQ] %0t generate seq[%d]",$time,i);
          drv_mbx.put(snp_trans_seq);
          $display ("T=%0t [Sequence] Wait for driver to be done", $time);
          @(drv_done);
        end
    endtask




    function void apply_randomization(input up_transaction up_trans, input int i);
        if(this.icache_cfg_seq.debug_en) begin
            if (up_trans.randomize()) begin
                if (up_trans.opcode==5'd2) begin
                    if(icache_cfg_seq.debug_en) $display("[DEBUG][UP_SEQ] %0t up read seq randomization[%d]",$time,i);
                end else begin
                    if(icache_cfg_seq.debug_en) $display("[DEBUG][UP_SEQ] %0t snp seq randomization[%d]",$time,i);
                end
            end 
            else begin
                $display("Randomization of transaction %d failed.", i);
            end
        end
    endfunction
    task read_req();
        for(int i=0;i<num;i=i+1)begin
            if(icache_cfg_seq.debug_en) $display("[DEBUG][UP_SEQ] %0t generate seq[%d]",$time,i);
            apply_randomization(up_trans[i],1);
        end
    endtask



endclass:up_sequence
