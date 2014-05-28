//manage cores of the processer
#ifndef CPU_HEADER
#define CPU_HEADER

#include <tmc/cpus.h>
struct CPU
{
	cpu_set_t set;//core set,usually contain 72 cores
	int cur;//current cpu index of 72 cores
};
void init_cpus();//init cpu_set
extern struct CPU cpu;
#endif
