#include <stdio.h>
#include <stdlib.h>

struct ponto {
 int x, y;
};

void atribui(struct ponto *p){
 (*p).x = 10;
 (*p).y = 20;
}

void atribuiComSeta(struct ponto *p){
 p->x = 15;
 p->y = 25;
}

int main(){
 struct ponto p1;
 atribui(&p1);
 printf("x1 = %d\n",p1.x);
 printf("y1 = %d\n",p1.y);
 atribuiComSeta(&p1);
 printf("x2 = %d\n",p1.x);
 printf("y2 = %d\n",p1.y);
 system("exit");
 return 0;
}