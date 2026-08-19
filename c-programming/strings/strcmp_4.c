#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(){
    char str1[SIZE], str2[SIZE];

    printf("Entre com uma string: \n");
    gets(str1);
    printf("Entre com outra string: \n");
    gets(str2);

    if(strcmp(str1,str2) == 0)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");
                
    system("exit");
    return 0;
}