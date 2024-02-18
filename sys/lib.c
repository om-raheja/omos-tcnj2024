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
itoa(s32 num, char *str, s32 base)
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
utoa(u32 num, char *str, s32 base)
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
				const char* str = itoa(num, strbuf, 10);
				vga_write(str, sizeof(str), 0x0f);
			} else if (format[i + 1] == 'o') {
				//octal numbers
				const s32 num = va_arg(list, s32);
				const char *str = itoa(num, strbuf, 8);
				vga_write(str, sizeof(str), 0x0f);
			} else if (format[i + 1] == 'u') {
				//unsigned integers
				const u32 num = va_arg(list, u32);
				const char *str = utoa(num, strbuf, 10);
				vga_write(str, sizeof(str), 0x0f);
			} else if (format[i + 1] == 'x') {
				//hexadecimal numbers
				const u32 num = va_arg(list, u32);
				const char* str = utoa(num, strbuf, 16);
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
