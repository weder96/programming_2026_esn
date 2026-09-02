// File SequentialList.h
#define MAX 100

struct student {
    int id;
    char name[30];
    float g1, g2, g3;
};


typedef struct list List;

List* create_list();
List* merge_lists(List* l1, List* l2);

int get_list_id(List* li, int id, struct student *st);
int get_list_pos(List* li, int pos, struct student *st);

int insert_list_end(List* li, struct student st);
int insert_list_start(List* li, struct student st);
int insert_list_sorted(List* li, struct student st);

int remove_list_end(List* li);
int remove_list_start(List* li);
int remove_duplicates(List* li);
int remove_list(List* li, int id);
int remove_list_optimized(List* li, int id);
int remove_list_failed(List* li, float threshold);

int list_size(List* li);
int is_list_full(List* li);
int is_list_empty(List* li);

int reverse_list(List* li);

int update_student_grade(List* li, int id, int grade_index, float new_grade);

void free_list(List* li);
void print_list(List* li);
