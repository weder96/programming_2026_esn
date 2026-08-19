#include <stdio.h>
#include <stdlib.h>

unsigned long long fatorial(int n) {
    if (n < 0) {
        fprintf(stderr, "Erro: fatorial não definido para números negativos.\n");
        return 0;
    }
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(void) {
    int n;
    printf("Digite um número inteiro não negativo: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Entrada inválida.\n");
        return 1;
    }

    unsigned long long *ptr = (unsigned long long *)malloc(sizeof(unsigned long long));
    if (ptr == NULL) {
        fprintf(stderr, "Falha na alocação de memória.\n");
        return 1;
    }

    *ptr = fatorial(n);
    printf("Fatorial de %d = %llu\n", n, *ptr);

    // Intencionalmente omite o free(ptr) para demonstrar um vazamento de memória.
    // Corretamente, deveria ser: free(ptr);

    return 0;
}