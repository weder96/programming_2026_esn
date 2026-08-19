#include <stdio.h>
#include <stdlib.h>

int main(){
 //Declara uma variável int contendo o valor 10
 int count = 10;
 //Declara um ponteiro para int
 int *p;
 //Atribui ao ponteiro o endereço da variável int
 p = &count;
 printf("Conteudo apontado por p: %d \n",*p);
 //Atribui um novo valor à posição de memória apontada por p
 *p = 12;
 printf("Conteudo apontado por p: %d \n",*p);
 printf("Conteudo de count: %d \n",count);
 system("exit");
}