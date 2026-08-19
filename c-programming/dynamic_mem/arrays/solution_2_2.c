#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 2
#define MAX_ROWS 2

int main(){
    int **p; //2 “*” = 2 níveis = 2 dimensões
    int i, j;
    p = (int **) malloc(MAX_LINES*sizeof(int *));
    for (i = 0; i < MAX_LINES; i++){
        p[i] = (int *) malloc(MAX_ROWS*sizeof(int));
        for (j = 0; j < MAX_ROWS; j++){
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d",&p[i][j]);
        }
    }
    for (i = 0; i < MAX_LINES; i++){
        free(p[i]);
    }
    free(p);
    p = NULL;
    system("exit");
    return 0;
}