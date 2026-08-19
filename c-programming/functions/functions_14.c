#include <stdio.h>
#include <stdlib.h>

struct vetor{
 int v[5];
};

struct vetor retorna_array(){
 struct vetor v = {1,2,3,4,5};
 return v;
}

int main(){
    int i;
    struct vetor vet = retorna_array();
    for (i=0; i<5; i++)
        printf("Valores: %d \n",vet.v[i]);
    system("exit");
    return 0;
}