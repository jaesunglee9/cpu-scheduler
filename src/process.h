/*
** PROCESS NUMBER(Technically belongs to accounting, but put put it separately
** because it is important)
** SCHEDULING INFORMATION(Priority,Pointers to scheduling queues)
** ACCOUNTING INFORMATION(CPU Burst time, real time, IO time etc)
*/

#ifndef __PROCESS
#define __PROCESS

typedef struct pcb_t  // process control block
{
	int pid;
	int priority;

	// accounting information
	int arrival;
	int cpu_burst;
	int cpu_remaining;

	int completion;
} pcb_t;

void
initrandpcb(pcb_t pcb[], int len);

#endif

