#include <stdio.h>

void specialLoop2(int n) {
    for (int i = 1; i * i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n = 30;
    printf("Sequencia gerada (n = %d):\n", n);
    specialLoop2(n); 
    // Saida esperada: 1 2 3 4 5
    // O numero 6 nao eh impresso pois 6 * 6 (36) eh maior que 30.
    return 0;
}