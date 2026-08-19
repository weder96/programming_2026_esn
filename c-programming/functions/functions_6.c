#include <stdio.h>
#include <stdlib.h>

void imprime(){
   printf("Teste de funcao\n");
}

int main(){
    imprime();
    imprime(5);
    imprime(5,'a');
    system("exit");
    return 0;
}