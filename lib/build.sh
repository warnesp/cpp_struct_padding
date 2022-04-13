#!/bin/bash
g++ -std=c++11 -fPIC -c -o mytest.o Test.cpp
gcc -shared -o libtest.so mytest.o

clang++ -std=c++11 -fPIC -c -o mytest-clang.o Test.cpp
clang++ -shared -o libtest-clang.so mytest.o

