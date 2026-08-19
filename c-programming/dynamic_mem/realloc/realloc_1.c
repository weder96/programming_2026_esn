#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int *p = malloc(5*sizeof(int));
    for (i = 0; i < 5; i++){
        p[i] = i+1;
    }
    for (i = 0; i < 5; i++){
        printf(" max with 5 : %d\n",p[i]);
    }
    printf("\n");
    //Diminui o tamanho do array
    p = realloc(p,3*sizeof(int));
    for (i = 0; i < 3; i++){
        printf(" max with 3 : %d\n",p[i]);
    }
    printf("\n");
    //Aumenta o tamanho do array
    p = realloc(p,10*sizeof(int));
    for (i = 0; i < 10; i++){
        printf(" max with 10 : %d\n",p[i]);
    }
    system("exit");
    return 0;
}