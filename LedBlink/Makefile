default = BLINK
$(info $$default is [${default}])

CC = gcc
$(info $$CC is [${CC}])

sources:= $(wildcard *.c)
$(info $$sources is [${sources}])

objects:= $(patsubst %.c, %.o, $(sources))
$(info $$objects is [${objects}])

all: $(objects)
	$(CC) $(objects) -o $(default)