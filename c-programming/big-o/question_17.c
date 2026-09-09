#include <stdio.h>

void nestedLooping17(int n) {
    for (int i = 1; i <= n; i *= 2) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k *= 2) {
                puts("CodeN");
            }
        }
    }
}

int main() {
    int n = 4;
    printf("Iniciando execucao original (n = %d):\n", n);
    nestedLooping17(n); 
    // Saída esperada: "CodeN" impresso 36 vezes
    return 0;
}