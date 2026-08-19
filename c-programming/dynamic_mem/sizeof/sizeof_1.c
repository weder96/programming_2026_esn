#include <stdio.h>
#include <stdlib.h>
struct ponto{
 int x,y;
};

int main(){
    printf("Tamanho char: %d\n",sizeof(char));
    printf("Tamanho int: %d\n",sizeof(int));
    printf("Tamanho float: %d\n",sizeof(float));
    printf("Tamanho double: %d\n",sizeof(double));
    printf("Tamanho struct ponto: %d\n",sizeof(struct ponto));
    int x;
    double y;
    printf("Tamanho da variavel x: %d\n",sizeof x);
    printf("Tamanho da variavel y: %d\n",sizeof y);
    system("exit");
    return 0;
}