#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;    
    arq = fopen("ArqGrav.txt", "rb"); // Abre o arquivo binário para leitura
    if (arq == NULL) {
        printf("Problemas na ABERTURA do arquivo\n");
        system("exit"); // Válido apenas para ambiente Windows
        exit(1);
    }

    int i, total_lido, v[5];
    // Lê 5 inteiros (bloco de 5 x sizeof(int) bytes)
    total_lido = fread(v, sizeof(int), 5, arq);

    if (total_lido != 5) {
        printf("Erro na leitura do arquivo!\n");
        fclose(arq);
        system("exit");
        exit(1);
    } else {
        for (i = 0; i < 5; i++) {
            printf("v[%d] = %d\n", i, v[i]);
        }
    }

    fclose(arq);
    system("exit");
    return 0;
}