void
sysinit(void)
{
	vga_clearscreen();
	vga_write("Om Smart.", 9, 0x0F);
	vga_write("Om Smarter.", 11, 0x0F);
}
