// File StaticQueue.h
#define MAX 4

struct student {
    int id;
    char name[30];
    float g1, g2, g3;
};

typedef struct queue Queue;

Queue* create_queue();
void free_queue(Queue* qu);
int peek_queue(Queue* qu, struct student *st);
int insert_queue(Queue* qu, struct student st);
int remove_queue(Queue* qu);
int queue_size(Queue* qu);
int is_queue_empty(Queue* qu);
int is_queue_full(Queue* qu);
void print_queue(Queue* qu);