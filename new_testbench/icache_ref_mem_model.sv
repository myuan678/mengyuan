class mem_model;
    bit[255:0] mem[bit[31:0]]; 

    function bit [255:0] read_mem(bit[31:0] addr);
        bit [255:0] data;
        if (mem.exists(addr)) begin
            data = mem[addr];
        end else begin
            for(int i=0;i<8;i++)begin
                mem[addr][i*32+:32] = $urandom(addr+i);
                data[i*32+:32] = mem[addr][i*32+:32];
            end
        end
        $display("[MEM_MODEL] READ mem[%0h]=%h", addr,data);

        return data;
    endfunction
endclass
