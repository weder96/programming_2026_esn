#include <stdio.h>
#include <stdlib.h>
#include "StaticQueue.h" // Includes the Prototypes

// Queue type definition
struct queue {
    int front, rear, count;
    struct student data[MAX];
};

Queue* create_queue() {
    Queue *qu;
    qu = (Queue*) malloc(sizeof(struct queue));
    if(qu != NULL){
        qu->front = 0;
        qu->rear = 0;
        qu->count = 0;
    }
    return qu;
}

void free_queue(Queue* qu) {
    free(qu);
}

int peek_queue(Queue* qu, struct student *st) {
    if(qu == NULL || is_queue_empty(qu))
        return 0;
    *st = qu->data[qu->front];
    return 1;
}

int insert_queue(Queue* qu, struct student st) {
    if(qu == NULL)
        return 0;
    if(is_queue_full(qu))
        return 0;
    qu->data[qu->rear] = st;
    qu->rear = (qu->rear + 1) % MAX;
    qu->count++;
    return 1;
}

int remove_queue(Queue* qu) {
    if(qu == NULL || is_queue_empty(qu))
        return 0;
    qu->front = (qu->front + 1) % MAX;
    qu->count--;
    return 1;
}

int queue_size(Queue* qu) {
    if(qu == NULL)
        return -1;
    return qu->count;
}

int is_queue_full(Queue* qu) {
    if(qu == NULL)
        return -1;
    if (qu->count == MAX)
        return 1;
    else
        return 0;
}

int is_queue_empty(Queue* qu) {
    if(qu == NULL)
        return -1;
    if (qu->count == 0)
        return 1;
    else
        return 0;
}

void print_queue(Queue* qu) {
    if(qu == NULL)
        return;
    int n, i = qu->front;
    for(n = 0; n < qu->count; n++){
        printf("ID: %d\n", qu->data[i].id);
        printf("Name: %s\n", qu->data[i].name);
        printf("Grades: %f %f %f\n", qu->data[i].g1,
                                     qu->data[i].g2,
                                     qu->data[i].g3);
        printf("-------------------------------\n");
        i = (i + 1) % MAX;
    }
}