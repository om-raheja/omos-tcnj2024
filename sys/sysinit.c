#include <types.h>

void
sysinit(void)
{
	char *howdy = "Om Smart";

	vga_clearscreen();
	vga_write(howdy, strlen(howdy), 0x1f);
}
