#include <types.h>

u32
strlen(const char *str)
{
	size_t i;

	for (i = 0; str[i] != NULL; i++);

	return i;
}

s32
printf(const char *format, ...)
{
	const u32 len = strlen(format);

	vga_write(format, len, 0x0f);
	return len;
}
