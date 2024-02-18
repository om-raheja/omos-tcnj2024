#ifndef VIDEO_H
#define VIDEO_H

#include <types.h>

#define SIZE		4000	

s8 *vga_vidmem = (s8 *)0xb8000;

void vga_write(s8 *, s8);
void vga_clearscreen(void);

#endif
