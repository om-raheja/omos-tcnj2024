include sys/Makefile
CC=cc
SRCS=$(wildcard sys/*.o) $(wildcard sys/*/*.o) $(wildcard sys/*/*/*.o)

all: vga.o sysinit.o
	echo $(SRCS)
	$(CC) $(SRCS) -o boot.img
