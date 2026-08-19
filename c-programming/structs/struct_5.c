#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x;
    int y;
};

struct novo_ponto {
    int x;
    int y;
};

int main(){
    struct ponto p1, p2= {1,2};
    struct novo_ponto p3= {3,4};
    p1 = p2;
    printf("p1 = %d e %d", p1.x,p1.y);
    //ERRO! TIPOS DIFERENTES
    //p1 = p3;
    printf("p1 = %d e %d", p1.x,p1.y);
    system("exit");
    return 0;
}
