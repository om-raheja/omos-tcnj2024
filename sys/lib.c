#include <types.h>

u32
strlen(const char *str)
{
	size_t i;

	for (i = 0; str[i] != NULL; i++)
		;

	return i;
}
