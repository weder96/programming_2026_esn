#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5]= {1,2,3,4,5};
    int *p = vet;
    int i;
    for (i = 0;i < 5;i++)
    printf("%d\n",p[i]);
    system("exit");
    return 0;
}