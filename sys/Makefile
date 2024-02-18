include sys/drv/vga/Makefile

CC=cc
FLAGS=-Wall -c -g -Wextra -ffreestanding -m32 -nostdlib 
SRCS=$(wildcard sys/*.c)
INC=sys/include/
INC_PARAMS=$(INC:%=-I%)

sysinit.o:
	$(CC) $(FLAGS) $(INC_PARAMS) $(SRCS)
