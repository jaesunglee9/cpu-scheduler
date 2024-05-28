#include <stdlib.h>

#include "./process.h"

#define MAXBURST 100
#define MAXARRIVAL  100
#define MAXPRIORITY 100



void
initRandPCB(pcb_t pcb[], int len)
{
    int i;
    for (i = 0; i < len; i++){

        pcb[i].pid = i+1;  /* 0 is reserved for end of computation in cpu log. This should change if cpu can be idle during computation.*/
        pcb[i].priority = rand()%MAXPRIORITY;

        pcb[i].arrival = rand()%MAXARRIVAL;
        pcb[i].cpu_burst = rand()%MAXBURST;
        pcb[i].cpu_remaining = pcb->cpu_burst;

        pcb->completion = 0;
    }
}

// TODO initialize according to some determined table()


// This is simply a decrement function for the given pcb when it is run on cpu. The amount of time that should be decremented is determined by the cpu scheduler.
// void run_process(pcb_t* pcb,unsigned int runtime){
//     pcb->cpu_remaining -= runtime;
//     return;
// }

// I am not sure we require io burst in cpu simulation.

// void del_process (pcb_t* process) {
//     free(process);
// }
//

