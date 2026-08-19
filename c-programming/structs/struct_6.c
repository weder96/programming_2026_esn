#include <stdio.h>
#include <stdlib.h>

struct endereco{
    char rua[50];
    int numero;
};

struct cadastro{
    char nome[50];
    int idade;
    struct endereco ender;
};

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    struct cadastro c;    
    gets(c.nome); //Lê do teclado uma string e armazena no campo nome
    //Lê do teclado um valor inteiro e armazena no campo idade
    scanf("%d",&c.idade);
    //Lê do teclado uma string
    limpar_buffer();
    gets(c.ender.rua);
    //Lê do teclado um valor inteiro
    //e armazena no campo numero da variável ender
    scanf("%d",&c.ender.numero);
    system("exit");
    return 0;
}