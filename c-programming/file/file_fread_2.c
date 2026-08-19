#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;

    // Abre o arquivo binário para leitura
    arq = fopen("exemplo.bin", "rb");
    if (arq == NULL) {
        printf("Problemas na ABERTURA do arquivo\n");
        system("exit"); // Requer Windows (no Linux/macOS remova ou use getchar())
        exit(1);
    }

    char str1[20], str2[20];
    float x;
    int i, v1[5], v2[2];

    // Lê os primeiros 12 caracteres do arquivo
    fread(str1, sizeof(char), 12, arq);
    str1[12] = '\0'; // Adiciona o caractere terminador de string
    printf("%s\n", str1);

    // Lê os próximos 5 caracteres do arquivo
    fread(str2, sizeof(char), 5, arq);
    str2[5] = '\0'; // Adiciona o caractere terminador de string
    printf("%s\n", str2);

    // Lê o valor float de x
    fread(&x, sizeof(float), 1, arq);
    printf("%f\n", x);

    // Lê um array inteiro de 5 posições
    fread(v1, sizeof(int), 5, arq);
    for (i = 0; i < 5; i++) {
        printf("v1[%d] = %d\n", i, v1[i]);
    }

    // Lê as próximas 2 posições inteiras do arquivo
    fread(v2, sizeof(int), 2, arq);
    for (i = 0; i < 2; i++) {
        printf("v2[%d] = %d\n", i, v2[i]);
    }

    fclose(arq);
    system("exit");
    return 0;
}