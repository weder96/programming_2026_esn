#include <stdio.h>
#include <stdlib.h>
#include "ListSequential.h" 

int main() {
    struct student a[6] = {{2, "Thiago Santos", 9.5, 7.8, 8.5},
                           {4, "Guilherme Costa", 7.5, 8.7, 6.8},
                           {1, "Heloisa Martins", 9.7, 6.7, 8.4},
                           {5, "Renato Andrade", 3.7, 2.1, 3.1},
                           {5, "Renato Andrade Marques", 3.7, 2.1, 3.1},
                           {3, "Rafael Souza", 5.7, 6.1, 7.4}                         
                    };
                           
    List* li = create_list();
    
    int i;
    int qty_elements_a = sizeof(a) / sizeof(a[0]);
    printf("Sudents Class A Qty: %d \n", qty_elements_a);


    for(i = 0; i < qty_elements_a; i++)
        insert_list_sorted(li, a[i]);

    
    printf("\n\n");    
    int studentRemovedCount = remove_duplicates(li);
    printf("Lista de Removido por Duplicatas: qtd: %d \n", studentRemovedCount);
    printf("--------------------------------------------\n");
    printf("Sudents Qty: %d \n", list_size(li));
    printf("--------------------------------------------\n");
    print_list(li);      

    free_list(li);    
  

    system("exit");
    return 0;
}