#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Digite um numero inteiro positivo:");
    int x;
    scanf("%d",&x);
    int i,f = 1;
    for (i=1; i<=x; i++)
        f = f * i;
        
    printf("O fatorial de %d eh: %d\n",x,f);
    system("exit");
    return 0;
}