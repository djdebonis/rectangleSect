# makefile for rectangle intersection project
# Author: David J DeBonis
# Version: 2020-09-12

# ************************************
# variables to control op

CXX = g++ -std=c++11
CXXFLAGS = -Wall -g

# *************************************
# targets

main: main.cpp Point.cpp Rectangle.cpp
		$(CXX) $(CXXFLAGS) main.cpp Point.cpp Rectangle.cpp
