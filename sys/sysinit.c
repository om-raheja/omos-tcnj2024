void
sysinit(void)
{
	vga_clearscreen();
	vga_write("Om Smart.", 0x0F);
}
