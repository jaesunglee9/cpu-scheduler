#include

int main(void)
{
  // TODO: initialize system
  /* Process Architecture
  ** Process: We assume that each process is represented as a process control
  ** block(PCB) and that the scheduler receives pointers to each PCBs
  ** From each PCB, we omit any information that are redundant in running simulation,
  ** so will only include the following:
  ** PROCESS STATE
  ** PROCESS NUMBER(Technically belongs to accounting, but put put it separately
  ** because it is important)
  ** SCHEDULING INFORMATION(Priority,Pointers to scheduling queues)
  ** ACCOUNTING INFORMATION(CPU Burst time, real time, IO time etc)
  */

  /* CPU architecture
  ** CLOCK (CURRENT TIME)
  ** RECORD(LOG)
  ** IO
  ** PROCESS
  */

  /* CPU Scheduler architecture
  ** ALGORITHM
  ** CLOCK Time
  ** Process queue
  ** cpu pointer
  ** enqueue
  ** scheduling function ????
  */

  /* Evaluation function
   */
  /* Utility functions
   */

  init_process();
  simulate(clk, js, cs, cpu, io);
  evaluate(cpu); // Other logs
  
  

  
  
  // TODO: for given process instantiation, perform each scheduling & display gantt chart
  // TODO: memory cleanup
  return 0;
}
