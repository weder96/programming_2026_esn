#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main(){
    char str1[SIZE], str2[SIZE];
    printf("Entre com uma string: \n");
    gets(str1);
    strcpy(str2, str1);
    printf("String 1: %s\n",str1);
    printf("String 2: %s\n",str2);
    system("exit");
    return 0;
}