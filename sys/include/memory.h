#ifndef MEMORY_H
#define MEMORY_H

#include <types.h>

#define EXTMEMBOT	0x100000
#define PHYSMEMTOP	0x0e000000


/*
 * Each allocated memory is stored internally like this:
 * nnnnssss(u)+
 * n represents the address to the next string
 * s represents the size of the allocated memory
 * c
 * u represents the actual string
 *
 * A struct cannot be plainly used because we would have to store a reference
 * so this complicated structure is utilized instead.
 */

#define START		0xb80f1
#define USABLE(m)	m + sizeof(s32) + sizeof(void *)
#define NEXT(m)		(void *) *m
#define SIZE(m)		(s32) m[sizeof(void *)]

void *start = 0x0 ;

#endif
