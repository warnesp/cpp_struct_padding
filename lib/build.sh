#!/bin/bash
g++ -std=c++11 -fPIC -c -o mytest.o Test.cpp
gcc -shared -o libtest.so mytest.o
