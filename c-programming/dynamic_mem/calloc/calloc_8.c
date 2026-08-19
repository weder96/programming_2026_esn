#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main(){
 //alocação com malloc
 int *p;
 p = (int *) malloc(MAX*sizeof(int));
 if(p == NULL){
    printf("Erro: Memoria Insuficiente!\n");
 }
 //alocação com calloc
 int *p1;
 p1 = (int *) calloc(MAX,sizeof(int));
 if(p1 == NULL){
    printf("Erro: Memoria Insuficiente!\n");
 }
 system("exit");
 return 0;
}