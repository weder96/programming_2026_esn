#include <stdio.h>
#include <stdlib.h>

struct ponto {
 int x, y;
};

void imprime(struct ponto p){
    printf("x = %d\n",p.x);
    printf("y = %d\n",p.y);
}

int main(){
    struct ponto p1 = {10,20};
    imprime(p1);
    system("exit");
    return 0;
}