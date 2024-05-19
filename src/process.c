pcb* create_pcb(unsigned int pid){
    if (pid==0){
        return NULL;
    }

}

// This is simply a decrement function for the given pcb. The amount of time that should be decremented is determined by the cpu scheduler.
void run_process(pcb* process,unsigned int runtime){
    process->cpu_remaining -= runtime;
    return;
}


