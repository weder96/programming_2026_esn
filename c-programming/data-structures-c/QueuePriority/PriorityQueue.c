#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PriorityQueue.h" // Includes the Prototypes

struct patient {
    char name[30];
    int priority;
};

struct priority_queue {
    int count;
    struct patient data[MAX];
};

PriorityQueue* create_priority_queue() {
    PriorityQueue *pq;
    pq = (PriorityQueue*) malloc(sizeof(struct priority_queue));
    if(pq != NULL)
        pq->count = 0;
    return pq;
}

void free_priority_queue(PriorityQueue* pq) {
    free(pq);
}

int peek_priority_queue(PriorityQueue* pq, char* name) {
    if(pq == NULL || pq->count == 0)
        return 0;
    strcpy(name, pq->data[pq->count - 1].name);
    return 1;
}

int insert_priority_queue(PriorityQueue* pq, char *name, int priority) {
    if(pq == NULL)
        return 0;
    if(pq->count == MAX) // queue is full
        return 0;

    int i = pq->count - 1;
    // Shift elements to maintain priority order
    while(i >= 0 && pq->data[i].priority >= priority) {
        pq->data[i+1] = pq->data[i];
        i--;
    }

    strcpy(pq->data[i+1].name, name);
    pq->data[i+1].priority = priority;
    pq->count++;
    return 1;
}

int remove_priority_queue(PriorityQueue* pq) {
    if(pq == NULL)
        return 0;
    if(pq->count == 0) // queue is empty
        return 0;
    pq->count--;
    return 1;
}

int priority_queue_size(PriorityQueue* pq) {
    if(pq == NULL)
        return -1;
    else
        return pq->count;
}

int is_priority_queue_full(PriorityQueue* pq) {
    if(pq == NULL)
        return -1;
    return (pq->count == MAX);
}

int is_priority_queue_empty(PriorityQueue* pq) {
    if(pq == NULL)
        return -1;
    return (pq->count == 0);
}

void print_priority_queue(PriorityQueue* pq) {
    if(pq == NULL)
        return;
    int i;
    for(i = pq->count - 1; i >= 0 ; i--) {
        printf("Priority: %d \tName: %s\n", pq->data[i].priority, pq->data[i].name);
    }
}