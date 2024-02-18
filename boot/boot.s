; only support mb1

bits 32

section .multiboot
	align	4
		dd 0x1badb002 
		dd 0x00
		dd - (0x1badb002 + 0x00)

global _start
extern sysinit

_start:
	cli
	call sysinit
	hlt
