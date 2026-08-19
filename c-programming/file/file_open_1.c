#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *fp;
fp = fopen("exemplo.bin","wb");
if(fp == NULL){
    printf("Erro na abertura do arquivo.\n");
} else {
    printf("Arquivo Aberto com Sucesso!!!\n");
}

fclose(fp);
system("exit");
return 0;
}