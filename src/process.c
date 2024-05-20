#include <stdlib.h>

#define MAXBURST 100
#define MAXARRIVAL  100
#define MAXPRIORITY 100



pcb_t* initialize_rand_pcb(unsigned int pid){
    pcb_t* pcb= (pcb_t*)malloc(sizeof(pcb_t));

    pcb->pid = pid;
    pcb->priority = rand()%MAXPRIORITY;
    pcb->arrival = rand()%MAXARRIVAL;
    pcb->cpu_burst = rand()%MAXBURST;
    pcb->cpu_remaining = pcb->cpu_burst;
    pcb->io_burst = rand()%MAXBURST;
    pcb->io_remaining = pcb->io_burst;
    pcb->completion = FALSE;
}

// TODO initialize according to some determined table()


// This is simply a decrement function for the given pcb. The amount of time that should be decremented is determined by the cpu scheduler.
void run_process(pcb_t* pcb,unsigned int runtime){
    pcb->cpu_remaining -= runtime;
    return;
}

void del_process (pcb_t* process) {
    free(process);
}


