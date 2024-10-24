import struct
import os

def log_to_bin(input_file, output_file):
    with open(input_file, 'r') as f:
        log_content = f.read().split()

    binary_data = b''
    for value in log_content:
        binary_data += struct.pack('>I', int(value, 16))

    with open(output_file, 'wb') as f:
        f.write(binary_data)

    print(f"completed! binfile: {output_file}")


input_file = '/home/xuemengyuan/try/cache_v1/icache/trace_replay/align_pc_trace_copy.log'
output_file = 'align_pc_trace_copy2.bin'

log_to_bin(input_file, output_file)