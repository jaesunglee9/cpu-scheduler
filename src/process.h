/*
** PROCESS NUMBER(Technically belongs to accounting, but put put it separately
** because it is important)
** SCHEDULING INFORMATION(Priority,Pointers to scheduling queues)
** ACCOUNTING INFORMATION(CPU Burst time, real time, IO time etc)
*/


struct pcb_t  // process control block
{
	unsigned int pid;
	unsigned int priority;

	// accounting information
	unsigned int arrival;
	unsigned int cpu_burst;
	unsigned int cpu_remaining;
	unsigned int io_burst;
	unsigned int io_remaining;
	unsigned int completion;
}

pcb* create_process (unsigned int pid);


