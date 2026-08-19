#include <stdio.h>
#include <stdlib.h>
int main(){
 int *pvet[2];
 int x = 10, y[2] = {20,30};
 pvet[0] = &x;
 pvet[1] = y;
 //imprime os endereços das variaveis
 printf("Endereco pvet[0]: %p\n",pvet[0]);
 printf("Endereco pvet[1]: %p\n",pvet[1]);
 //imprime o conteúdo de uma variável
 printf("Conteudo em pvet[0]: %d\n",*pvet[0]);
 //imprime uma posição do vetor
 printf("Conteudo pvet[1][1]: %d\n",pvet[1][1]);
 system("exit");
 return 0;
}