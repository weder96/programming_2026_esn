#include <stdio.h>
#include <stdlib.h>

typedef int inteiro;

int main(){
    
    int x = 10;
    inteiro y = 20;
    y = y + x;
    printf("Soma = %d\n",y);
    system("exit");
    return 0;
}