#!/bin/csh -f

cd /data/usr/xuemy/try/cache_v1/icache_v1_1008_release/work/rtl_compile

#This ENV is used to avoid overriding current script in next vcselab run 
setenv SNPS_VCSELAB_SCRIPT_NO_OVERRIDE  1

/tools/software/synopsys/vcs/T-2022.06/linux64/bin/vcselab $* \
    -o \
    simv \
    -nobanner \

cd -

