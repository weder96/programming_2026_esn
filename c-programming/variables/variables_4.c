#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2,n3,n4,n5;
    printf("Digite a nota de 5 estudantes: \n");
    scanf("%f \n",&n1);
    scanf("%f \n",&n2);
    scanf("%f \n",&n3);
    scanf("%f \n",&n4);
    scanf("%f \n",&n5);
    float media = (n1+n2+n3+n4+n5)/5.0;
    printf("media: %f \n",media);
    if(n1 > media) printf("nota: n1: %f \n",n1);
    if(n2 > media) printf("nota: n2: %f \n",n2);
    if(n3 > media) printf("nota: n3: %f \n",n3);
    if(n4 > media) printf("nota: n4: %f \n",n4);
    if(n5 > media) printf("nota: n5: %f \n",n5);
    system("exit");
    return 0;
}