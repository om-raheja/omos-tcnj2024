#include <memory.h>
#include <types.h>

u32 curr = START;

void
memory_init(void)
{
	u32 esp, ebp;
	ebp = STACK_START;
	esp = STACK_START;
}

void *malloc(s32 size) {
    u32 addr = curr;
    curr += size;
    return (void*)addr;
}
