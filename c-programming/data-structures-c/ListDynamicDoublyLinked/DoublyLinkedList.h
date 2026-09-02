// File: DoublyLinkedList.h

struct student {
    int registration_number;
    char name[30];
    float grade1, grade2, grade3;
};

typedef struct element* List;

List* create_list();
void free_list(List* list);
int get_list_by_pos(List* list, int pos, struct student *st);
int get_list_by_id(List* list, int id, struct student *st);
int insert_list_end(List* list, struct student st);
int insert_list_begin(List* list, struct student st);
int insert_list_sorted(List* list, struct student st);
int remove_list(List* list, int id);
int remove_list_begin(List* list);
int remove_list_end(List* list);
int list_size(List* list);
int is_list_empty(List* list);
void print_list(List* list);