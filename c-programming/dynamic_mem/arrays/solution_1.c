#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 5
#define MAX_ROWS 5

int main(){
    int *p;
    int i, j;
    
    p = (int *) malloc(MAX_LINES * MAX_ROWS * sizeof(int));
    for (i = 0; i < MAX_LINES; i++){
        for (j = 0; j < MAX_ROWS; j++)
            p[i * MAX_ROWS + j] = i+j;
    }
    for (i = 0; i < MAX_LINES; i++){
        for (j = 0; j < MAX_ROWS; j++)
            printf("%d \t",p[i * MAX_ROWS + j]);
    printf("\n");
    }
    
    free(p);
    p = NULL;
    
    system("exit");
    return 0;
}