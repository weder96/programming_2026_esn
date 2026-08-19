#include <stdio.h>
#include <stdlib.h>
struct ponto {
 int x, y;
};

void soma_imprime_valor(int *n){
 *n = *n + 1;
 printf("Valor = %d\n",*n);
}

int main(){
 struct ponto p1 = {10,20};
 soma_imprime_valor(&p1.x);
 soma_imprime_valor(&p1.y);
 system("exit");
 return 0;
}