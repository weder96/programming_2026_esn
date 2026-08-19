#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 256

int main(){
    char str1[MAX_STR] = "bom ";
    char str2[MAX_STR] = "dia";

    strcat(str1,str2);
    printf("%s \n",str1);
    
    system("exit");
    return 0;
}