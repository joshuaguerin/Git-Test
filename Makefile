# File: Makefile
# Author: Joshua T. Guerin, Ph.D.
# Project: Git Test
# Description: Practice with github.com for CSCI: 325 Data Structures at
# 	       the University of Tennessee at Martin


CC = g++
CFLAGS = -c -Wall
TARGET = main

all: $(TARGET)

$(TARGET): main.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)

