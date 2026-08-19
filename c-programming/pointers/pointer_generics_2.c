#include <stdio.h>
#include <stdlib.h>
int main(){
 void *pp;
 int p2 = 10;
 // ponteiro genérico recebe o endereço de um inteiro
 pp = &p2;
 //enta acessar o conteúdo do ponteiro genérico
 //printf("Conteudo: %d\n",*pp); //ERRO
 //converte o ponteiro genérico pp para (int *) 
 //antes de acessar seu conteúdo.
 printf("Conteudo: %d\n",*(int*)pp); //CORRETO
 system("exit");
 return 0;
}