CC=cc
FLAGS=-Wall -c -g -Wextra -ffreestanding -m32 -nostdlib 
SRCS=$(wildcard sys/drv/vga/*.c)
INC=sys/drv/vga/include/ sys/include/
INC_PARAMS=$(INC:%=-I%)
BIN=obj/vga.o

vga.o:
	$(CC) $(FLAGS) $(INC_PARAMS) $(SRCS) -o $(BIN)
	
