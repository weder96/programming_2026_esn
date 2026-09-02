#include <stdio.h>
#include <stdlib.h>
#include "ListSequential.h" 

int main() {
    struct student a[5] = {{2, "Thiago Santos", 9.5, 7.8, 8.5},
        {4, "Guilherme Costa", 7.5, 8.7, 6.8},
        {1, "Heloisa Martins", 9.7, 6.7, 8.4},
        {5, "Renato Andrade", 3.7, 2.1, 3.1},
        {3, "Rafael Souza", 5.7, 6.1, 7.4}                         
    };

    struct student b[3] = {{1, "Aliny Dias", 9.5, 7.8, 8.5},
        {2, "Nayara Maria", 7.5, 8.7, 6.8},
        {3, "Victor Menezes", 9.7, 6.7, 8.4}                              
    };

                           
    List* l1 = create_list();
    List* l2 = create_list();
    List* l3 = create_list();
    
    int i;
    int qty_elements_a = sizeof(a) / sizeof(a[0]);
    int qty_elements_b = sizeof(b) / sizeof(b[0]);

    printf("Sudents Class A Qty: %d \n", qty_elements_a);
    printf("Sudents Class B Qty: %d \n", qty_elements_b);

    for(i = 0; i < qty_elements_a; i++)
        insert_list_sorted(l1, a[i]);

    for(i = 0; i < qty_elements_b; i++)
        insert_list_sorted(l2, b[i]);

    //print_list(li);
    
    printf("\n\n");
    l3 = merge_lists(l1, l2);

    printf("Sudents Class Merge Qty: %d \n", list_size(l3));
    printf("--------------------------------------------\n");
    print_list(l3);    

    free_list(l1);    
    free_list(l2);
    free_list(l3);

    system("exit");
    return 0;
}