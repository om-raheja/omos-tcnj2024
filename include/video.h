#ifndef VIDEO_H
#define VIDEO_H

#define VGA_START	0xB8000
#define SIZE		4000	

void vga_write(char *, char, short);
void vga_clearscreen();

#endif
