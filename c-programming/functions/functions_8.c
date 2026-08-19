#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
    int i,f = 1;
    for (i=1; i<=n; i++)
    f = f * i;
    return f;
}

int main(){
    printf("Digite um numero inteiro positivo: \n");
    int x;
    scanf("%d",&x);
    int fat = fatorial(x);
    printf("O fatorial de %d eh: %d\n",x,fat);
    system("exit");
    return 0;
}