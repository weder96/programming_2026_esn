#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20] = "Hello World!";
    int result;
    FILE *arq;
    arq = fopen("arquivoGravar.txt","w");
    if(arq == NULL) {
        printf("Problemas na CRIACAO do arquivo\n");
        system("exit");
        exit(1);
    }
    result = fputs(str,arq);
    if(result == EOF){
        printf("Erro na Gravacao\n");
    }else{
        printf("\n Dados Gravado com sucesso!");
    }
         
    fclose(arq);
    system("exit");
    return 0;
}