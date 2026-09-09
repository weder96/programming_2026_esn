#include <stdio.h>

void nestedLooping03(int n) {
    for (int i = n / 2; i <= n; i++) {
        for (int j = 1; j <= n / 2; j++) {
            for (int k = 1; k <= n; k *= 2) {
                puts("CodeN");
            }
        }
    }
}

int main() {
    int n = 4;
    printf("Iniciando execucao original (n = %d):\n", n);
    nestedLooping03(n); 
    // Saída esperada: "CodeN" impresso 18 vezes
    return 0;
}