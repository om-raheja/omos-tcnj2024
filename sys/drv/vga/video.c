#include <types.h>
#include <video.h>

void
vga_write(s8 *sequence, s16 size, s8 flags)
{
	if (size > VGA_TEXT_SIZE) {
		s16 using_size = size - VGA_TEXT_SIZE;

		for (s16 i = 0; i <= VGA_SIZE; i++) {
			vga_vidmem[i] = sequence[using_size + i];
			vga_vidmem[++i] = flags; } 

		unused = 4001;
		return;
	} 

	if (size * 2 + unused >= VGA_SIZE) {
		s16 needed_space = size * 2;

		for (s16 i = 0; i <= (unused = VGA_SIZE - needed_space); i++) {
			vga_vidmem[i] = vga_vidmem[needed_space + i];
		} 
	} 

	for (s16 i = 0; i < size; i++) {
		vga_vidmem[unused++] = sequence[i];
		vga_vidmem[unused++] = flags;
	}
} 

void
vga_clearscreen(void)
{
	unused = 0;
    for (s16 i = 0; i <= VGA_SIZE; i++) {
        vga_vidmem[i] = 0;
    }
}
