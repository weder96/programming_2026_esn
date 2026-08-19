#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

// Função simples para limpar o buffer do teclado
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    struct cadastro c; 
    printf("Digite Nome: \n");
    gets(c.nome); 
    printf("Digite Idade: \n");
    scanf("%d", &c.idade);
    limpar_buffer();  // Limpamos o buffer 
    printf("Digite Rua: \n");
    gets(c.rua);    

    printf("Digite Numero: \n");
    scanf("%d", &c.numero);
    
    printf("\n--- Cadastro Realizado ---\n");
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
    printf("Rua: %s, %d\n", c.rua, c.numero);
    return 0;
}