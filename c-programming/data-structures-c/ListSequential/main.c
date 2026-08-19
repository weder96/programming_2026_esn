#include <stdio.h>
#include <stdlib.h>
#include "ListSequential.h" 

int main() {
    struct student a[4] = {{2, "Thiago Santos", 9.5, 7.8, 8.5},
                           {4, "Guilherme Costa", 7.5, 8.7, 6.8},
                           {1, "Heloisa Martins", 9.7, 6.7, 8.4},
                           {3, "Rafael Souza", 5.7, 6.1, 7.4}};
                           
    List* li = create_list();
    int i;
    
    for(i = 0; i < 4; i++)
        insert_list_sorted(li, a[i]);

    print_list(li);
    printf("\n\n");

    for(i = 0; i < 5; i++) {
        if (!remove_list_optimized(li, i))
            printf("Error\n");

        print_list(li);
        printf("\n\n");
    }

    free_list(li);
    system("exit");
    return 0;
}