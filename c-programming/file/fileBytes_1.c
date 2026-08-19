#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;

    // Abre o arquivo binário para leitura
    arq = fopen("arquivoGravar.txt", "rb");
    if (arq == NULL) {
        printf("Problemas na ABERTURA do arquivo\n");
        return 1;
    }

    int i, total_lido, v[5];

    // Lê 5 inteiros do arquivo binário
    total_lido = fread(v, sizeof(int), 5, arq);

    if (total_lido != 5) {
        printf("Erro na leitura do arquivo!\n");
        fclose(arq);
        return 1;
    }

    // Exibe os valores lidos
    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    fclose(arq);
    return 0;
}