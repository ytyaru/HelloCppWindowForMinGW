:: http://webkaru.net/clang/mingw-gcc-hello-world/
:: 「gcc: エラー: CreateProcess: No such file or directory」というエラーが表示された。
:: gcc hello.cpp -o hello -std=c++11
g++ hello.cpp -o hello -mwindows
pause
