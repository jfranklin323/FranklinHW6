#!/bin/bash

echo "Building file myCopier.cpp"
g++ myCopier.cpp -o myCopier
./myCopier textfile1.txt textfile2.txt
