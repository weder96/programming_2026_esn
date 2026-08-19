#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(){
      int notas[MAX];
      int i;
      for (i = 0; i < MAX; i++){
            printf("Digite a nota do aluno %d ",i);
            scanf("\t %d",&notas[i]);
      }
      system("exit");
      return 0;
}
