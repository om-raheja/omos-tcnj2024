#include <types.h>

void
sysinit(void)
{
	vga_clearscreen();
	vga_write("fish stick.", 10, 0x07);
}
