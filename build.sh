#!/bin/bash

cd lib
./build.sh
cd ..

mv lib/*.so .

g++ -std=c++17 -L. -ltest -Wl,-rpath='${ORIGIN}' -o testapp testapp.cpp

