#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(){
 int i;
 int *p, *p1;
 p = (int *) malloc(MAX*sizeof(int));
 p1 = (int *) calloc(MAX,sizeof(int));
 printf("calloc \t\t malloc\n");
 for (i=0; i<MAX; i++)
 printf("p1[%d] = %d \t p[%d] = %d\n",i,p1[i],i,p[i]);
 system("exit");
 return 0;
}