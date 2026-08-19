#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main(){
      struct cadastro c[4];
      int i;
      for(i=0; i<4; i++){
        gets(c[i].nome);
        scanf("%d",&c[i].idade);
        gets(c[i].rua);
        scanf("%d",&c[i].numero);
      }
      system("exit");
      return 0;
}
