#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
FILE *arq;
arq = fopen("arquivoGravar.txt","wb");
if(arq == NULL){
printf("Problemas na CRIACAO do arquivo\n");
system("exit");
exit(1);
}
char str[20] = "Hello World!";
float x = 5;
int v[5] = {1,2,3,4,5};
//grava a string toda no arquivo
fwrite(str,sizeof(char),strlen(str),arq);
//grava apenas os 5 primeiros caracteres da string
fwrite(str,sizeof(char),5,arq);
//grava o valor de x no arquivo
fwrite(&x,sizeof(float),1,arq);
//grava todo o array no arquivo (5 posições)
fwrite(v,sizeof(int),5,arq);
//grava apenas as 2 primeiras posições do array
fwrite(v,sizeof(int),2,arq);
fclose(arq);
system("exit");
return 0;
}