#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *fp;
    char c;
    fp = fopen("arquivo_r.txt","r");
    if(fp==NULL){
        printf("Erro na abertura do arquivo\n");
        system("exit");
        exit(1);
    }
    while(!feof(fp)){
        c = fgetc(fp);
        printf("%c",c);
    }

    fclose(fp);
    system("exit");
    return 0;
}