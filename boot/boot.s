; only support mb1
align	equ 1 << 0
info	equ 1 << 1
flags	equ align | info
magic	equ 0x1BADB002
chksum	equ - (magic + flags)

section .multiboot
	align	4
			dd magic
			dd flags
			dd chksum

global _start
extern sysinit

_start:
	cli
	call sysinit
	hlt
