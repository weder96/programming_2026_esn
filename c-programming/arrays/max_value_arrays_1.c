#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, lista[5] = {3,18,2,51,45};
    int Maior = lista[0];
    for(i=1; i<5; i++){
        if(Maior < lista[i])
            Maior = lista[i];
    }
    printf("Maior = %d\n", Maior);
    system("exit");
    return 0;
}