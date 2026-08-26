// File DynamicLinkedList.h

struct student {
    int id; // matricula
    char name[30]; // nome
    float g1, g2, g3; // n1, n2, n3 (grades)
};

typedef struct element* List;

List* create_list();
void free_list(List* li);
int insert_list_end(List* li, struct student st);
int insert_list_begin(List* li, struct student st);
int insert_list_sorted(List* li, struct student st);
int remove_list(List* li, int id);
int remove_list_begin(List* li);
int remove_list_end(List* li);
int list_size(List* li);
int list_empty(List* li);
int list_full(List* li);
void print_list(List* li);
int search_list_id(List* li, int id, struct student *st);
int search_list_pos(List* li, int pos, struct student *st);