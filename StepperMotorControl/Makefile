default = STEPPER
$(info $$default is [${default}])

CC = gcc
$(info $$CC is [${CC}])

libs := -lwiringPi\

sources:= $(wildcard *.c)
$(info $$sources is [${sources}])

objects:= $(patsubst %.c, %.o, $(sources))
$(info $$objects is [${objects}])

all: $(objects)
	$(CC) $(objects) -o $(default) $(libs)
