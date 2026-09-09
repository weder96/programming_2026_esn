#include <stdio.h>

void nestedLooping(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= 11; k++) {
                puts("Code N");
            }
        }
    }
}

int main() {
    int n = 3;
    printf("Iniciando execucao original (n = %d):\n", n);
    nestedLooping(n); 
    // Saída esperada: "CodeN" impresso 
    // 66 vezes (6 iteracoes de i e j * 11)
    return 0;
}