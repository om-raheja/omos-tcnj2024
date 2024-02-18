#include <types.h>
#include <video.h>

void
vga_write(s8 *sequence, s16 size, s8 flags)
{
	if (size > VGA_TEXT_SIZE) {
		s16 using_size = size - VGA_TEXT_SIZE;

		for (s16 i = 0; i <= VGA_SIZE; i++) {
			vga_vidmem[i] = sequence[using_size + i];
			vga_vidmem[++i] = flags;
		} 

		unused = 4001;
		return;
	} 

	s16 needed_space = size + unused - VGA_TEXT_SIZE;
	if (needed_space >= 0) {
		for (s16 i = 0; i <= VGA_SIZE - needed_space; i++) {
			vga_vidmem[i] = vga_vidmem[i + needed_space];
		} 

		unused = VGA_SIZE - needed_space;
	} 

	while (*sequence != '\0') {
		vga_vidmem[unused++] = *sequence;
		*sequence++;
		vga_vidmem[unused++] = flags;
	}
} 

void
vga_clearscreen(void)
{
    for (s16 i = 0; i <= VGA_SIZE; i++) {
        vga_vidmem[i] = 0;
    }
}
