#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int main(){
    int *p;
    p = (int *) malloc(MAX_SIZE*sizeof(int));
    if(p == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        system("exit");
        exit(1);
    }
    int i;
    for (i=0; i<MAX_SIZE; i++){
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",&p[i]);
    }
    system("exit");
    return 0;
}