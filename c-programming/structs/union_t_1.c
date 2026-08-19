#include <stdio.h>
#include <stdlib.h>

union tipo{
    short int x;
    unsigned char c;
};

int main(){
    union tipo t;
    t.x = 1545;
    printf("x = %d\n",t.x);
    printf("c = %d\n",t.c);
    t.c = 69;
    printf("x = %d\n",t.x);
    printf("c = %d\n",t.c);
    system("exit");
    return 0;
}