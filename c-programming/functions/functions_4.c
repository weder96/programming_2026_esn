#include <stdio.h>
#include <stdlib.h>

int square (int a){
 return (a*a);
}

int main(){
    int n1,n2;
    printf("Entre com um numero: \n");
    scanf("%d", &n1);
    n2 = square(n1);
    printf("O seu quadrado vale: %d\n", n2);
    system("exit");
    return 0;
}