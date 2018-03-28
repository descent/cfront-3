# for convenience using cfront
#!/bin/sh
fn=$1
main_fn=${fn%%.*}
ext_fn=${fn##*.}
echo $main_fn
echo $ext_fn
cpp -Iincl-master/incl-linux32/ $main_fn.C > $main_fn.i # 處理 header files
./cfront +a1 +L +f$main_fn.C < $main_fn.i > $main_fn..c # 將 cpp 檔 (.C) 轉成 .c 檔
gcc $main_fn..c ./libC.a -o $main_fn.tmp # 不知道
nm $main_fn.tmp | ./munch > $main_fn.cdts..c # 不知道
gcc $main_fn..c $main_fn.cdts..c ./libC.a -o $main_fn # 輸出可執行檔
