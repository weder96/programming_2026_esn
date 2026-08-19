#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 2

int main(){
    int mat[LIN][COL] = {{1,2},{3,4}};
    int i,j;
    for(i=0;i<LIN;i++)
        for(j=0;j<COL;j++)
            printf("%d\n", mat[i][j]);
    system("exit");
    return 0;
}