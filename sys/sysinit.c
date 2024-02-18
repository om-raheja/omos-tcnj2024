#include <types.h>
#include <extern.h>


void
sysinit(void)
{
	char *howdy = "Om Smart.";

	vga_clearscreen();
	vga_write("Starting omOS...", 16, 0x0F);

	memory_init();
}
