#include <stdio.h>

void nestedLooping19(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j += i) {
            puts("CodeN");
        }
    }
}

int main() {
    int n = 4;
    printf("Iniciando execucao original (n = %d):\n", n);
    nestedLooping19(n); 
    // Saída esperada: "CodeN" impresso 9 vezes
    return 0;
}