#!/bin/bash

cd lib
./build.sh
cd ..

mv lib/*.so .

g++ -std=c++14 -L. -ltest -Wl,-rpath='${ORIGIN}' -o testapp testapp.cpp
clang++ -std=c++14 -L. -ltest-clang -Wl,-rpath='${ORIGIN}' -o testapp-clang testapp.cpp

