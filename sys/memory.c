#include <memory.h>
#include <types.h>

u32 curr = START;

void 
memory_init(void)
{ 
	u32 esp, ebp;
	ebp = 0x8B7F0;
} 

void *malloc(s32 size) {
    u32 addr = curr;
    curr += size;
    return (void*)addr;
}
