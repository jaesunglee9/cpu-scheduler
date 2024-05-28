#include "./process.h"
#include "./cpu.h"
#include "./scheduler.h"

void
simulate(cpu_t* cpu, int algo, pcb_t* pcb)
{
    switch algo {
        case FCFS:
            fcfs(cpu_t* cpu, *pcb)
            break;
    }
}
