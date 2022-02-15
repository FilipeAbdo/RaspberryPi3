default = BLINK

CC = gcc

sources:= $(wildcard *.c)

objects:= $(patsubts %.c, %.o, $(sources))

all: $(objects)
	CC $(objects) -o default