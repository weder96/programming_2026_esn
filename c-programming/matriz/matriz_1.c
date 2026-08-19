#include <stdio.h>
#include <stdlib.h>

#define MAX_L 100
#define MAX_R 50

int main(){
 int mat[MAX_L][MAX_R];
 int i,j;
    for (i = 0; i < MAX_L; i++){
        for (j = 0; j < MAX_R; j++){
            printf("Digite o valor de mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
 system("exit");
 return 0;
}