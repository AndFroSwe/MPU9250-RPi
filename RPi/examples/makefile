# Makefile for example program using the MPU-9250 IMU
# Author: Andreas Froderberg

CC = g++
CSTD = c++11
DEBUG = -g
CFLAGS = -Wall --std=$(CSTD) $(DEBUG)
LIBS = -lwiringPi -I..

printIMU.out: printIMU.cpp MPU9250.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

MPU9250.o: MPU9250.cpp
	$(CC) $(CFLAGS) -c -o $@ $< $(LIBS)

clean:
	rm *.out -f
