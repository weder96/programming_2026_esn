#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *arq;
    char c;
    arq = fopen("arquivo_r.txt","r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("exit");
        exit(1);
    }
    while((c = fgetc(arq)) != EOF)
    printf("%c",c);

    fclose(arq);
    system("exit");
    return 0;
}