#ifndef STRING_H
#define STRING_H

#include <types.h>

u32 strlen(const char *str);
char* strtol(s32 num, char *str, s32 base);
char* strtoul(u32 num, char *str, s32 base);
char* strcpy(char *dest, const char *src);
char* strncpy(char *dest, const char *src, size_t count);
char* strcat(char *dest, const char *src);
char* strncat(char *dest, const char *src, size_t count);
s32 strcmp(const char *lhs, const char *rhs);

#endif