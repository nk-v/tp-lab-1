mkdir -p lib
g++ -dynamiclib -fpic largestNum/largestNum.cpp -o lib/liblargestnum.dylib
g++ main.cpp -I./largestNum -L./lib -llargestnum
./a.out