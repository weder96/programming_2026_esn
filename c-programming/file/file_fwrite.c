#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *arq;
arq = fopen("arquivoGravar.txt","wb");
if(arq == NULL){
printf("Problemas na CRIACAO do arquivo\n");
system("exit");
exit(1);
}
int total_gravado, v[5] = {1,2,3,4,5};
//grava todo o array no arquivo (5 posições)
total_gravado = fwrite(v,sizeof(int),5,arq);
if(total_gravado != 5){
printf("Erro na escrita do arquivo!");
system("exit");
exit(1);
}
fclose(arq);
system("exit");
return 0;
}