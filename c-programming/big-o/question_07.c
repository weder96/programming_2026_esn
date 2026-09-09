#include <stdio.h>

void printWithSteps(int n) {
    for (int i = 1; i <= n; i += 3) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n = 15;
    printf("Sequencia gerada (n = %d):\n", n);
    printWithSteps(n); // Saida esperada: 1 4 7 10 13
    return 0;
}