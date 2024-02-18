#ifndef TYPES_H
#define TYPES_H

#define NULL			0x00

#define TRUE			0
#define FALSE			1

typedef	unsigned int		u32;
typedef unsigned short		u16;
typedef unsigned char		u8;
typedef	int			s32;
typedef short			s16;
typedef char			s8;

typedef unsigned int		size_t;
typedef int			ssize_t;

typedef unsigned char *va_list;
#define va_start(list, param)   (list = (((va_list)&param) + sizeof(param)))
#define va_arg(list, type)  (*(type *)((list += sizeof(type)) - sizeof(type)))
#define va_end(list)    (list = NULL)

#endif
