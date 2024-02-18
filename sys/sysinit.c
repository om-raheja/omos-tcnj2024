#include <types.h>

void
sysinit(void)
{
	vga_clearscreen();
	vga_write("Om Smert.", 9, 0x0F);
	vga_write("Om Smarter.", 11, 0x0F);
	for (s16 i = 0; i < 99; i++) {
		vga_write("Om Smart.", 9, 0x0F);
		vga_write("Om Smarter.", 11, 0x0F);
	} 
	vga_write("fish stick", 10, 0x07);
}
