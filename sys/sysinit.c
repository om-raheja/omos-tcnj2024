#include <types.h>
#include <extern.h>


void
sysinit(void)
{
	char *howdy = "Om Smart.";
	char *howday = "Om Smarter.";

	vga_clearscreen();
	vga_write("Starting omOS...", 16, 0x0F);

	memory_init();

	s8 *start = (s8 *) 0xb8fa0;
	start[0] = 'h';
}
