#include <stdlib.h>
#include "process.h"

#define MAXQUEUESIZE 100

struct NODE {
    pcb_t* process;
    NODE* next;
};

struct QUEUE {
    NODE* head;
    NODE* tail;
};


void* queue(){
    QUEUE* q = (QUEUE*)malloc(sizeof(QUEUE));
    q->head = NULL;
    q->tail = NULL;
    return (void*)q;
}
void enqueue(void* arg, pcb_t* process){
    QUEUE* q = (QUEUE*)arg;
    NODE* node = (NODE*)malloc(sizeof(NODE));
    node->process = process;
    node->next = NULL;
    if(q->head==NULL){
        q->head = node;
    }else{
        q->tail->next = node;
    }
    q->tail = node;
}
pcb_t* dequeue(QUEUE* q){
    NODE* del = q->head;
    q->head = del->next;
    pcb_t* p = del->process;
    free(del);
    return p;
}


