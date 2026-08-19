#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, x = 10;
    p = &x;
    printf("Conteudo apontado por p: %d \n",*p);
    *p = (*p)++;
    printf("Conteudo apontado por p: %d \n",*p);
    *p = (*p) * 10;
    printf("Conteudo apontado por p: %d \n",*p);
    system("exit");
    return 0;
}