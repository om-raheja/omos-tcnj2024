#include <memory.h>

void *
malloc(s32 size) 
{
	s32 actual_size = size + sizeof(s32) + sizeof(void *);
	
	if (start == NULL) {
		start = (void *) START;

		start[0] = '\0';
		start[1] = '\0';
		start[2] = '\0';
		start[3] = '\0';

		SIZE(m) = size;
		
		return USABLE(m);
	} 

	/* TODO */
} 
