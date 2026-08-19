#include <stdio.h>
#include <stdlib.h>

void imprime (int *n, int m){
    int i;
    for (i=0; i<m;i++)
    printf("%d \n", n[i]);
}

int main(){
    int v[5] = {1,2,3,4,5};
    imprime(v,5);
    system("exit");
    return 0;
}