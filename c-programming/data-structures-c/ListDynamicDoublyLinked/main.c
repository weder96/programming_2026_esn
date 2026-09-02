#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

int main() {
    struct student st, s[4] = {{2, "Andre Rodrigues", 9.5, 7.8, 8.5},
                               {4, "Ricardo Costa", 7.5, 8.7, 6.8},
                               {1, "Bianca Martins", 9.7, 6.7, 8.4},
                               {3, "Ana Souza", 5.7, 6.1, 7.4}};
                               
    List* list = create_list();
    printf("Size: %d\n\n\n\n", list_size(list));

    int i;
    for (i = 0; i < 4; i++)
        insert_list_sorted(list, s[i]);

    print_list(list);
    printf("\n\n\n\n Size: %d\n", list_size(list));

    // remove_list(list, 3);
    for (i = 0; i < 4; i++) {
        remove_list_end(list);
        print_list(list);
        printf("\nSize: %d\n\n\n\n", list_size(list));
    }

    for (i = 0; i < 4; i++)
        insert_list_sorted(list, s[i]);

    print_list(list);
    free_list(list);
    
    system("exit");
    return 0;
}