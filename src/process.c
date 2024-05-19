pcb* create_pcb(unsigned int pid){
    if (pid==0){
        return NULL;
    }

}

void run_process(pcb* process,unsigned int runtime){
    process->cpu_remaining -= runtime;
    return;
}


