#include <stdio.h>
#include <stdlib.h>

void encode(){
    FILE *fs, *fd;
    fs = fopen("lena.txt","r");
    if(fs == NULL) return;

    fd = fopen("lena_compressed.txt","w");
    if(fd == NULL) return;

    int va, new_va, n = 1;
    fscanf(fs,"%d",&va);
    while(1) {
        fscanf(fs,"%d",&new_va);

        if(feof(fs)) break;

        if(va == new_va){
            n++;
        }else{
            if(n > 1 || va == 0)
                fprintf(fd,"0 %d %d ",va, n);
            else
                fprintf(fd,"%d ",va);

            va = new_va;
            n = 1;
        }
    }
    fclose(fs);
    fclose(fd);
}

void decode(){
    FILE *fs, *fd;
    fs = fopen("lena_compressed.txt","r");
    if(fs == NULL) return;

    fd = fopen("lena_new.txt","w");
    if(fd == NULL) return;

    int i, va, new_va, n = 1;
    while(1) {
        fscanf(fs,"%d",&va);

        if(feof(fs)) break;

        if(va == 0){
            fscanf(fs,"%d%d",&new_va,&n);
            for(i = 1; i <= n; i++)
                fprintf(fd,"%d ",new_va);
        }else
            fprintf(fd,"%d ",va);
    }

    fclose(fs);
    fclose(fd);
}

int main(){
    encode();

    decode();

    return 0;
}

