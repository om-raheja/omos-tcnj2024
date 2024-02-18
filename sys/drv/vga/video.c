#include <types.h>
#include <video.h>

void
vga_write(s8 *sequence, s32 size, s8 flags)
{
	if (size > VGA_SIZE) {
		s32 using_size = size - VGA_SIZE;

		for (s32 i = 0; i <= VGA_SIZE; i++) {
			vga_vidmem[i] = sequence[using_size + i];
		} 
	} 

	u32 i = *vga_vidmem;

	while (*sequence != '\0') {
		vga_vidmem[i] = *sequence;
		*sequence++;
		i++;
		vga_vidmem[unused++] = flags;
		i++;
	}
} 

void
vga_clearscreen(void)
{
    for (int i = 0; i <= VGA_SIZE; i++) {
        vga_vidmem[i] = 0;
    }
}
