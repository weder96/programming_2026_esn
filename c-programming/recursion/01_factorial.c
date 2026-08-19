/*
1) Faça uma função recursiva que 
calcule e retorne o fatorial de um número inteiro N.
*/

#include <stdio.h>

int fatorial(int n) {
    // Condição de parada (Caso Base)
    if (n == 0 || n == 1) {
        return 1;
    }
    // Passo recursivo
    return n * fatorial(n - 1);
}

int main() {    
    int n = 5;
    printf("%d = %d\n", n, fatorial(n));
    return 0;
}
