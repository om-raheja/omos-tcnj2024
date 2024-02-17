SRC=$(wildcard src/*.c)
BOOT=$(wildcard boot/*.s)
INCLUDE=include/
FLAGS=-g -Wall -Wextra -Ffreestanding -m32
BIN=boot.img

all: boot
	$(CC) $(FLAGS) $(SRC) -I $(INCLUDE) -o $(BIN)

boot: 
	nasm -Fl32

install: all
	./installgrub.sh
	
