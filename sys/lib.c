#include <types.h>
static char strbuf[32];

u32
strlen(const char *str)
{
	size_t i;

	for (i = 0; str[i] != NULL; i++);

	return i;
}

char*
strtol(s32 num, char *str, s32 base)
{
	s32 i = 0;

	if (num < 0 && base == 10) {
		str[i++] = '-';
		num = -num;
	}

	while (num != 0) {
		s32 remainder = num % base;
		str[i++] = (remainder < 10) ? remainder + '0' : remainder + 'a' - 10;
		num/=base;
	}

	str[i] = '\0';

	return str;
}

char*
strtoul(u32 num, char *str, s32 base)
{
	s32 i = 0;

	while (num != 0) {
		s32 remainder = num % base;
		str[i++] = (remainder < 10) ? remainder + '0' : remainder + 'a' - 10;
		num/=base;
	}

	str[i] = '\0';

	return str;
}

char*
strcpy(char *dest, const char *src)
{
	u32 i = 0;

	while (src[i] != NULL) {
		dest[i] = src[i];
		i++;
	}

	return dest;
}

char*
strncpy(char *dest, const char *src, size_t count)
{
	u32 i = 0;

	while (src[i] != NULL && i < count) {
		dest[i] = src[i];
		i++;
	}

	return dest;
}

char*
strcat(char *dest, const char *src)
{
	u32 i = 0;

	while (dest[i] != NULL) i++;

	while (src[i] != NULL) {
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return dest;
}

char*
strncat(char *dest, const char *src, size_t count)
{
	u32 i = 0;

	while (dest[i] != NULL) i++;

	while (src[i] != NULL && i < count) {
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return dest;
}

s32
strcmp(const char *lhs, const char *rhs)
{
	u32 i = 0;

	while (lhs[i] != NULL && rhs[i] != NULL) {
		if (lhs[i] != rhs[i]) {
			return lhs[i] - rhs[i];
		}
	}

	return 0;
}

s32
printf(const char *format, ...)
{
	const u32 len = sizeof(format);
	va_list list;
	va_start(list, len);

	for (u32 i = 0; i < len; i++) {
		if (format[i] == '%') {
			if (format[i + 1] == 'd' || format[i + 1] == 'i') {
				//integer numbers
				const s32 num = va_arg(list, s32);
				const char* str = strtol(num, strbuf, 10);
				vga_write(str, sizeof(str), 0x0f);
			} else if (format[i + 1] == 'o') {
				//octal numbers
				const s32 num = va_arg(list, s32);
				const char *str = strtol(num, strbuf, 8);
				vga_write(str, sizeof(str), 0x0f);
			} else if (format[i + 1] == 'u') {
				//unsigned integers
				const u32 num = va_arg(list, u32);
				const char *str = strtoul(num, strbuf, 10);
				vga_write(str, sizeof(str), 0x0f);
			} else if (format[i + 1] == 'x') {
				//hexadecimal numbers
				const u32 num = va_arg(list, u32);
				const char* str = strtoul(num, strbuf, 16);
				vga_write(str, sizeof(str), 0x0f);
			} else if (format[i + 1] == 's') {
				//strings
				const char *str = va_arg(list, char*);
				vga_write(str, strlen(str), 0x0f);
			} else if (format[i + 1] == 'c') {
				//one character
				vga_write(va_arg(list, char), 1, 0x0f);
			} else if (format[i + 1] == '%') {
				vga_write('%', 1, 0x0f);
			}
		} else if (format[i] == '\\' && format[i + 1] == '%') {
			vga_write('%', 1, 0x0f);
		} else {
			vga_write(format[i], 1, 0x0f);
		}
	}
}
