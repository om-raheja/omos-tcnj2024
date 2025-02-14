#include <kbd.h>

static inline u8 
inb(u16 port)
{
    u8 ret;
    __asm__ volatile ( "inb %w1, %b0"
                   : "=a"(ret)
                   : "Nd"(port)
                   : "memory");
    return ret;
}

u8
waitkey(void)
{ 
	u8 k;
	while ((k=inb(0x60))<128);
	while (inb(0x60)>128);

	return k;
}
