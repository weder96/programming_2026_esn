#include <stdio.h>
#include <stdlib.h>
#include "StaticQueue.h"

int main() {   
    struct student st, a[4] = {{2, "Thiago Santos", 9.5, 7.8, 8.5},
                               {4, "Guilherme Costa", 7.5, 8.7, 6.8},
                               {1, "Heloisa Martins", 9.7, 6.7, 8.4},
                               {3, "Rafael Souza", 5.7, 6.1, 7.4}};
                               
    Queue* qu = create_queue();
    
    printf("Size: %d\n\n\n\n", queue_size(qu));
    
    int i;
    for(i = 0; i < 4; i++) {
        insert_queue(qu, a[i]);
        peek_queue(qu, &st);
        printf("Peek: %d \t %s\n", st.id, st.name);
    }

    print_queue(qu);
    printf("Size: %d\n\n\n\n", queue_size(qu));

    for(i = 0; i < 4; i++) {
        remove_queue(qu);
        peek_queue(qu, &st);
        printf("Peek: %d \t %s\n", st.id, st.name);
    }
    
    printf("Size: %d\n\n\n\n", queue_size(qu));
    print_queue(qu);

    for(i = 0; i < 4; i++)
        insert_queue(qu, a[i]);

    printf("Size: %d\n\n\n\n", queue_size(qu));
    print_queue(qu);

    free_queue(qu);
    system("exit");
    return 0;
}