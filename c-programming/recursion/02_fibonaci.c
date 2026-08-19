/*
2) Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/
#include <stdio.h>

int fibonacci(int n) {
    // Condição de parada (Casos Base)
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Passo recursivo: a soma dos dois termos anteriores
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {    
    int n = 10;
    printf("%d = %d\n", n, fibonacci(n));
    return 0;
}