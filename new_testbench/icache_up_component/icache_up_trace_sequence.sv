class icache_up_trace_sequence extends icache_up_base_sequence;

    virtual task base_seq(int num=10);
        string trace_file_path = "/data/usr/xuemy/mengyuan/mengyuan/trace_replay/pc_trace.bin";
        if($value$plusargs("trace_file=%s", trace_file_path))begin;
           $display("trace_file_path=%s", trace_file_path);
        end
        file = $fopen(trace_file_path, "rb");
        if (file == 0) begin
            $display("Error: Cannot open file.");
            $finish;
        end
        while (!$feof(file)) begin
            icache_up_transaction up_trans_trace = new;
            up_trans_trace.randomize();
            read_bytes = $fread(data_buffer, file); 
            if (read_bytes != 4) begin
                $display("Warning: Incomplete read, read %0d bytes.", read_bytes);
                break;
            end
            up_trans_trace.tag    = data_buffer.tag;  
            up_trans_trace.index  = data_buffer.index;
            up_trans_trace.offset = data_buffer.offset;
            if(cfg.debug_en)  $display (" [TRACE_SEQUENCE] T=%0t, up_trans_trace= %h",  $time, data_buffer);
            drv_mbx.put(up_trans_trace);
        end
        $fclose(file);
    endtask

endclass
