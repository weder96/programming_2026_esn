#include <stdio.h>
#include <stdlib.h>
#include "ListDynLinked.h"

int main() {
    struct student st, s[4] = {{2, "Thiago Santos", 9.5, 7.8, 8.5},
                               {4, "Guilherme Costa", 7.5, 8.7, 6.8},
                               {1, "Bianca Martins", 9.7, 6.7, 8.4},
                               {3, "Ana Souza", 5.7, 6.1, 7.4}};
    List* li = create_list();
    printf("Size: %d\n\n\n\n", list_size(li));

    int i;
    for(i = 0; i < 4; i++)
        insert_list_sorted(li, s[i]);

    print_list(li);
    printf("\n\n\n\n Size: %d\n", list_size(li));

    for(i = 0; i < 4; i++) {
        remove_list_end(li);
        print_list(li);
        printf("\n Size: %d\n\n\n", list_size(li));
    }

    for(i = 0; i < 4; i++)
        insert_list_sorted(li, s[i]);
        
    print_list(li);

    free_list(li);
    system("exit");
    return 0;
}