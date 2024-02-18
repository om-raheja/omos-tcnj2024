#ifndef PROCESS_H
#define PROCESS_H

#include <types.h>

struct process {
	void *prstart;
	s32 prsize;
	s32 pid;
};

#endif
