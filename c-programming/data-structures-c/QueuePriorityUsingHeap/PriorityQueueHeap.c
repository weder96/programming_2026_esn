#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PriorityQueueHeap.h" // Includes the prototypes

// http://see-programming.blogspot.com.br/2013/05/implement-priority-queue-using-binary.html
// buildUp ??? 

// http://algs4.cs.princeton.edu/24pq/

struct patient {
    char name[30];
    int priority;
};

struct priority_queue {
    int count;
    struct patient data[MAX]; // Note: MAX must be defined in PriorityQueueHeap.h
};

PriorityQueue* create_PriorityQueue() {
    PriorityQueue *pq;
    pq = (PriorityQueue*) malloc(sizeof(struct priority_queue));
    if (pq != NULL)
        pq->count = 0;
    return pq;
}

void free_PriorityQueue(PriorityQueue* pq) {
    free(pq);
}

int peek_PriorityQueue(PriorityQueue* pq, char* name) {
    if (pq == NULL || pq->count == 0)
        return 0;
    strcpy(name, pq->data[0].name);
    return 1;
}

void promoteElement(PriorityQueue* pq, int child) {
    int parent;
    struct patient temp;
    parent = (child - 1) / 2;
    
    // Sifts the element up to restore the max-heap property
    while ((child > 0) && (pq->data[parent].priority <= pq->data[child].priority)) {
        temp = pq->data[child];
        pq->data[child] = pq->data[parent];
        pq->data[parent] = temp;

        child = parent;
        parent = (parent - 1) / 2;
    }
}

int insert_PriorityQueue(PriorityQueue* pq, char *name, int priority) {
    if (pq == NULL)
        return 0;
    if (pq->count == MAX) // queue is full
        return 0;
        
    /* inserts at the first free position */
    strcpy(pq->data[pq->count].name, name);
    pq->data[pq->count].priority = priority;
    
    /* shifts element to the correct position */
    promoteElement(pq, pq->count);
    
    /* increments the number of elements in the heap */
    pq->count++;
    return 1;
}

void demoteElement(PriorityQueue* pq, int parent) {
    struct patient temp;
    int child = 2 * parent + 1;
    
    // Sifts the element down to restore the max-heap property
    while (child < pq->count) {

        if (child < pq->count - 1) /* checks if it has 2 children */
            if (pq->data[child].priority < pq->data[child + 1].priority)
                child++; /* child points to the child with higher priority */

        if (pq->data[parent].priority >= pq->data[child].priority)
            break; /* found its place */

        temp = pq->data[parent];
        pq->data[parent] = pq->data[child];
        pq->data[child] = temp;

        parent = child;
        child = 2 * parent + 1;
    }
}

int remove_PriorityQueue(PriorityQueue* pq) {
    if (pq == NULL)
        return 0;
    if (pq->count == 0)
        return 0;

    pq->count--;
    // Replaces the root with the last element
    pq->data[0] = pq->data[pq->count];
    // Reorganizes the heap
    demoteElement(pq, 0);
    return 1;
}

int size_PriorityQueue(PriorityQueue* pq) {
    if (pq == NULL)
        return -1;
    else
        return pq->count;
}

int isFull_PriorityQueue(PriorityQueue* pq) {
    if (pq == NULL)
        return -1;
    return (pq->count == MAX);
}

int isEmpty_PriorityQueue(PriorityQueue* pq) {
    if (pq == NULL)
        return -1;
    return (pq->count == 0);
}

void print_PriorityQueue(PriorityQueue* pq) {
    if (pq == NULL)
        return;
    int i;
    for (i = 0; i < pq->count; i++) {
        printf("%d) Prio: %d \tName: %s\n", i, pq->data[i].priority, pq->data[i].name);
    }
}