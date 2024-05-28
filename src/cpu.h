#define MAXRUN 999

#include "./process.h"

typedef struct cpu_t
{
    int algo;
    int start_time[MAXRUN];
    int pid[MAXRUN];
} cpu_t;

void
simulate(cpu_t cpu, int algo, pcb_t* pcb);
