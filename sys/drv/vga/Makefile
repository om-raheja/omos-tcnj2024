CC=cc
FLAGS=-Wall -c -g -Wextra -ffreestanding -m32 -nostdlib 
SRCS=$(wildcard *.c)
INCLUDE=include/ 
MAIN_INCLUDE=../../include/
BIN=../../../obj/drv/vga.o

all:
	$(CC) $(FLAGS) -I $(INCLUDE) -I $(MAIN_INCLUDE) $(SRCS) -o $(BIN)
	
