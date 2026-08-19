#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 5;
    printf("Antes do scanf: x = %d\n",x);
    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("Depois do scanf: x = %d\n",x);
    system("exit");
    return 0;
}