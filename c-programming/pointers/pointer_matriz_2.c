#include <stdio.h>
#include <stdlib.h>

#define LIN 2
#define COL 2

int main(){
    int mat[LIN][COL] = {{1,2},{3,4}};
    int * p = &mat[0][0];
    int i;
    for(i=0;i<(LIN*COL);i++)
    printf("%d\n", *(p+i));
    system("exit");
    return 0;
}