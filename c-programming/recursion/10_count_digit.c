/** 
 10) Escreva uma função recursiva que determine quantas vezes um dígito K ocorre
em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
 */
#include <stdio.h>

int contarDigito(int n, int k) {
    // Condição de parada: se n chegou a 0, não há mais dígitos para verificar
    if (n == 0) {
        return 0;
    }
    
    // Extrai o último dígito
    int ultimoDigito = n % 10;
    
    // Passo recursivo: soma 1 se for igual a K, soma 0 caso contrário
    if (ultimoDigito == k) {
        return 1 + contarDigito(n / 10, k);
    } else {
        return 0 + contarDigito(n / 10, k);
    }
}


int main() {    
    int num = 762021192;
    int search = 2;
    printf("A quantidade de vezes que o digito 2 aparece em %d eh: %d ", num, contarDigito(num, search));
    return 0;
}
