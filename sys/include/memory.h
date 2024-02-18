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

#define START		0xb80f0
#define SIZE		16384

/* 
 * How memory is mapped
 */
#define STACK_START 0x000b8fa0
#define STACK_END	0x000fffff
#define PR_START	0x00100000
#define MALLOC_END	0x00100fff
#define PHYSMEMTOP	0x0e000000

struct allocated {
	void *ref;
	s32 size;
} 

void memory_init(void);

#endif
