#include <types.h>
#include <extern.h>

void
sysinit(void)
{
	char *howdy = "Om Smart.";

	vga_clearscreen();
	vga_write("Starting omOS...", 16, 0x0F);

	char thing = waitkey();
	vga_write(&thing, 1, 0x1F);
	// memory_init();
}
