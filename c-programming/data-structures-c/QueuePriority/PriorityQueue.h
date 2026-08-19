// File PriorityQueue.h
#define MAX 100

typedef struct priority_queue PriorityQueue;

PriorityQueue* create_priority_queue();
void free_priority_queue(PriorityQueue* pq);
int peek_priority_queue(PriorityQueue* pq, char* name);
int insert_priority_queue(PriorityQueue* pq, char *name, int priority);
int remove_priority_queue(PriorityQueue* pq);
int priority_queue_size(PriorityQueue* pq);
int is_priority_queue_full(PriorityQueue* pq);
int is_priority_queue_empty(PriorityQueue* pq);
void print_priority_queue(PriorityQueue* pq);