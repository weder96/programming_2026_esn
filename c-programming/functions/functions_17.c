#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int *n){
    *n = *n + 1;
    printf("Dentro da funcao: x = %d\n",*n);
}

int main(){
int x = 5;
printf("Antes da funcao: x = %d\n", x);
soma_mais_um(&x);
printf("Depois da funcao: x = %d\n", x);
system("exit");
return 0;
}