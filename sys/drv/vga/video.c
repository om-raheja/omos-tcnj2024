#include <types.h>
#include <video.h>

void
vga_write(s8 *sequence, s8 flags)
{
	u32 i = *vga_vidmem;

	while (*sequence != '\0') {
		vga_vidmem[i] = *sequence;
		*sequence++;
		i++;
		vga_vidmem[i] = flags;
		i++;
	}
} 

void vga_clearscreen() {
    for (int i = 0; i <= SIZE; i++) {
        vga_vidmem[i] = 0;
    }
}
