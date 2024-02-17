include sys/drv/vga/Makefile
CC=cc

all: vga.o
	$(CC) sys/drv/vga/vga.o -o boot.img
