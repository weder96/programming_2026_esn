#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30];
    printf("Digite um nome: \n");
    fgets (nome, 30, stdin);
    printf("O nome digitado foi: %s",nome);
    
    system("exit");
    return 0;
}