pcb_t* initialize_pcb(unsigned int pid){
    pcb_t* pcb= (pcb_t*)malloc(sizeof(pcb_t));
    pcb

}

// This is simply a decrement function for the given pcb. The amount of time that should be decremented is determined by the cpu scheduler.
void run_process(pcb_t* pcb,unsigned int runtime){
    pcb->cpu_remaining -= runtime;
    return;
}


