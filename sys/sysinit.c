#include <types.h>

void
sysinit(void)
{
	vga_clearscreen();
	for (s16 i = 0; i < 51; i++) {
		vga_write("Om Smart.", 9, 0x0F);
		vga_write("Om Smarter.", 11, 0x0F);
	} 
	//vga_write("fish stick.", 10, 0x07);
}
