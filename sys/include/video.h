#ifndef VIDEO_H
#define VIDEO_H

#include <types.h>

#define VGA_SIZE		4000
#define	VGA_TEXT_SIZE	2000
s16 unused =			0;

s8 *vga_vidmem =		(s8 *)0xb8000;
s8 vga_unused =			0;

void vga_write(s8 *, s16, s8);
void vga_clearscreen(void);

#endif
