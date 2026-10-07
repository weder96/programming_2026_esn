// Arquivo PriorityQueueHeap.h (File PriorityQueueHeap.h)
#define MAX 100

typedef struct priority_queue PriorityQueue;

PriorityQueue* create_PriorityQueue();
void free_PriorityQueue(PriorityQueue* pq);
int peek_PriorityQueue(PriorityQueue* pq, char* name);
int insert_PriorityQueue(PriorityQueue* pq, char *name, int priority);
int remove_PriorityQueue(PriorityQueue* pq);
int size_PriorityQueue(PriorityQueue* pq);
int isFull_PriorityQueue(PriorityQueue* pq);
int isEmpty_PriorityQueue(PriorityQueue* pq);
void print_PriorityQueue(PriorityQueue* pq);