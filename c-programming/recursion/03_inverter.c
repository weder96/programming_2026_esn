/*
3) Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321
*/
#include <stdio.h>

// A função recebe o número original e um "acumulador" que começa em 0
int inverterNumero(int n, int invertido) {
    // Condição de parada: não há mais dígitos para processar
    if (n == 0) {
        return invertido;
    }
    // Passo recursivo: extrai o último dígito de 'n' e adiciona a 'invertido'
    return inverterNumero(n / 10, invertido * 10 + (n % 10));
}

// Função casca (wrapper) para facilitar a chamada na main
int inverter(int n) {
    return inverterNumero(n, 0);
}



int main() {    
    int num1 = 123;
    printf("%d = %d\n", num1, inverter(num1));
    return 0;
}