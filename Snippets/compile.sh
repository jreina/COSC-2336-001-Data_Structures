#!/bin/sh

g++ -c func1.cpp
g++ -c func2.cpp
g++ -c jan23.cpp

g++ -o jan23 func1.o func2.o jan23.o
