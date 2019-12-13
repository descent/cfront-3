#!/bin/sh
main_fn=t
cpp-5 -Iincl-master/incl-linux32/ $main_fn.C > $main_fn.i # 處理 header files
./cfront +a1 +L +f$main_fn.C < $main_fn.i > $main_fn..c # 將 cpp 檔 (.C) 轉成 .c 檔

main_fn=m
cpp-5 -Iincl-master/incl-linux32/ $main_fn.C > $main_fn.i # 處理 header files
./cfront +a1 +L +f$main_fn.C < $main_fn.i > $main_fn..c # 將 cpp 檔 (.C) 轉成 .c 檔

#gcc-5 t..c m..c ./libC.a -o t.tmp

#nm t.tmp | ./munch  > m.cdts..c

gcc-5 m..c t..c m.cdts..c ./libC.a -o m2
