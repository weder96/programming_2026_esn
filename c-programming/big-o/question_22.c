#include <stdio.h>

void printRecursivo(int n) {
    if (n <= 0) return;
    printf("%d ", n);
    printRecursivo(n - 1);
}

int main() {
    int n = 10;
    printf("Algoritmo Original (n = %d):\n", n);
    printRecursivo(n); 
    // Saída esperada: 10 9 8 7 6 5 4 3 2 1
    printf("\n");
    return 0;
}