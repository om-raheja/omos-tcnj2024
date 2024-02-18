#include <types.h>

void
sysinit(void)
{
	vga_clearscreen();
	vga_write("fish stick.", 10, 0x0F);
	for (s16 i = 0; i <= 2000; i += 20) {
		vga_write("Om Smart!", 9, 0x0F);
		vga_write("Om Smarter!", 11, 0x0F);
	} 
}
