#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq;
    arq = fopen("arquivo.bin","rb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("exit");
        exit(1);
    }
    int tamanho;
    fseek(arq,0,SEEK_END);
    tamanho = ftell(arq);
    fclose(arq);
    printf("Tamanho do arquivo em bytes: %d:",tamanho);
    system("exit");
    return 0;
}