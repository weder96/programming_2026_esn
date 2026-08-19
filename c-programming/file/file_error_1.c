#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *arq;
arq = fopen("NaoExiste.txt","r");
if(arq == NULL)
perror("O seguinte erro ocorreu");
else
fclose(arq);
system("exit");
return 0;
}