/**
 * 
6) Crie um programa em C, que contenha uma função recursiva que receba dois
inteiros positivos k e n e calcule kn
. Utilize apenas multiplicações. O programa principal
deve solicitar ao usuário os valores de k e n e imprimir o resultado da chamada da
função.

 */
#include <stdio.h>

// Função recursiva para calcular k elevado a n
int potencia(int k, int n) {
    // Condição de parada: qualquer número elevado a zero é 1
    if (n == 0) {
        return 1;
    }
    // Passo recursivo: k multiplicado por k elevado a n-1
    return k * potencia(k, n - 1);
}

int main() {
    int k, n, result;

    // Solicita os valores ao usuário
    printf("Digite a base (k) [inteiro positivo]: ");
    scanf("%d", &k);
    
    printf("Digite o expoente (n) [inteiro positivo]: ");
    scanf("%d", &n);

    // Chamada da função e impressão do resultado
    result = potencia(k, n);
    printf("O resultado de %d elevado a %d eh: %d\n", k, n, result);

    return 0;
}