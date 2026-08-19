#include <stdio.h>
#include <stdlib.h>

enum escapes {retrocesso='\b', tabulacao='\t', novalinha='\n'};

int main(){
    enum escapes e = novalinha;
    printf("Teste %c de %c escrita\n",e,e);
    e = tabulacao;
    printf("Teste %c de %c escrita\n",e,e);
    system("exit");
    return 0;
}

