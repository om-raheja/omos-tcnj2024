include sys/Makefile
CC=cc


all: vga.o
	$(CC) sys/drv/vga/vga.o 
	


