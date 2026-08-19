#include <stdio.h>
#include <stdlib.h>

int main(){
      int i, lista[5] = {3,51,18,2,45};
      int soma = 0;
      for(i=0; i < 5; i++)
            soma = soma + lista[i];
      printf("Soma = %d\n",soma);
      system("exit");
      return 0;
}
