#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    printf("Algoritmo Original (n = %d):\n", n);
    printf("Resultado: %d\n", fibonacci(n)); 
    // Saída esperada: 55
    return 0;
}