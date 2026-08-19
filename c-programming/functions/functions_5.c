#include <stdio.h>
#include <stdlib.h>

//protótipo da função
int square (int a);
int main(){
      int n1,n2;
      printf("Entre com um numero: ");
      scanf("\t %d", &n1);
      n2 = square(n1);
      printf("O seu quadrado vale: %d\n", n2);
      system("exit");
      return 0;
}

int square (int a){
      return (a*a);
}



