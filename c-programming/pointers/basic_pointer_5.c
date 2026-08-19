#include <stdio.h>
#include <stdlib.h>

int main(){
 //Declara uma variável int contendo o valor 10
 int count = 10;

 //Declara um ponteiro para int
 int *p;

 //Atribui ao ponteiro o endereço da variável int
 p = &count;
 printf("Endereco de count: %x\n", p);

 system("exit");
 return 0;
}