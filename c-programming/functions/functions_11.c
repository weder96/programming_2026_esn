#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
 return x + y;
}

int main(){
    int a,b,c;
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);
    printf("Soma = %d\n",soma(a,b));
    system("exit");
    return 0;
}