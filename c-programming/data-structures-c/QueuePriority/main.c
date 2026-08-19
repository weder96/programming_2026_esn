#include <stdio.h>
#include <stdlib.h>
#include "PriorityQueue.h"

struct patient {
    char name[30];
    int priority;
};

int main() {
    struct patient patients[6] = {{"Alice Smith", 1},
                                  {"Bob Johnson", 2},
                                  {"Charlie Williams", 5},
                                  {"Diana Davis", 10},
                                  {"Ethan Miller", 9},
                                  {"Fiona Wilson", 2}};

    PriorityQueue* pq = create_priority_queue();

    int i;
    for (i = 0; i < 6; i++) {
        printf("%d) %d %s\n", i, patients[i].priority, patients[i].name);
        insert_priority_queue(pq, patients[i].name, patients[i].priority);
    }

    printf("=================================\n");

    print_priority_queue(pq);

    printf("=================================\n");
    
    for (i = 0; i < 6; i++) {
        remove_priority_queue(pq);
        print_priority_queue(pq);
        printf("=================================\n");
    }

    free_priority_queue(pq);

    system("exit");
    return 0;
}