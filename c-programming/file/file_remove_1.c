#include <stdio.h>
#include <stdlib.h>
int main(){
int status;
status = remove("ArqGrav.txt");
if(status != 0){
printf("Erro na remocao do arquivo.\n");
system("exit");
exit(1);
}else
printf("Arquivo removido com sucesso.\n");
system("exit");
return 0;
}