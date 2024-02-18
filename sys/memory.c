#include <memory.h>
#include <types.h>

u32 curr = START;

void *malloc(s32 size) {
    u32 addr = curr;
    curr += size;
    return (void*)addr;
}
