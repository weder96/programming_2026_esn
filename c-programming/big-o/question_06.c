#include <stdio.h>

void printHalving(int n) {
    for (int i = n; i >= 1; i /= 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n = 20;
    printf("Sequência gerada (n = %d):\n", n);
    printHalving(n); // Saída esperada: 20 10 5 2 1
    return 0;
}