#include <types.h>
#include <extern.h>


void
sysinit(void)
{
	char *howdy = "Om Smart.";

	vga_clearscreen();
	/*
	for (s16 i = 0; i < 100; i++) {
		vga_write(howdy, strlen(howdy), 0x1f);
		vga_write(howday, strlen(howday), 0x0f);
	}

	vga_write("sid", 3, 0x07);
	vga_write("did", 3, 0x07);
	vga_write("fid", 3, 0x07);
	*/

	vga_write(
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter.Om Smart.Om Smarter."
"bob", 2003, 0x0F);
	vga_write("indian", 6, 0x07);
	vga_write("indian", 6, 0x07);

	printf("%s%x", "Omh", 0x2a);
	vga_write("Starting omOS...", 16, 0x0F);

	memory_init();

}
