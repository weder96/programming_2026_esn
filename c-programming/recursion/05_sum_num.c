/*
5) Crie uma função recursiva que receba um número inteiro positivo N e calcule o
somatório dos números de 1 a N.
*/

#include <stdio.h>

int somatorio(int n) {
    // Condição de parada
    if (n <= 1) {
        return n;
    }
    // Passo recursivo
    return n + somatorio(n - 1);
}



int main() {    
    int N = 4;
    printf("O somatorio de %d = %d\n", N, somatorio(N));
    return 0;
}