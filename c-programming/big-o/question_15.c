#include <stdio.h>

void questao15(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i * i; j++) {
            for (int k = 1; k <= n / 2; k++) {
                puts("CodeN");
            }
        }
    }
}

int main() {
    int n = 2;
    printf("Iniciando execucao original (n = %d):\n", n);
    questao15(n); 
    // Saída esperada: "CodeN" impresso 5 vezes
    return 0;
}