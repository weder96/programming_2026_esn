/*
4) Faça uma função recursiva que permita somar os elementos de um vetor de
inteiros.
*/

#include <stdio.h>

// Passamos o vetor e o tamanho atual dele
int somarVetor(int vetor[], int tamanho) {
    // Condição de parada: se o tamanho for 0, a soma é 0 (elemento neutro)
    if (tamanho == 0) {
        return 0;
    }
    // Passo recursivo: soma o último elemento e chama a função para o restante
    return vetor[tamanho - 1] + somarVetor(vetor, tamanho - 1);
}


int main() {    
    int vet[5] = {10,20,30,40,50};
    int len = sizeof(vet) / sizeof(vet[0]);
    printf("len: %d\n",len);
    printf("a soma do vetor e: %d\n", somarVetor(&vet, len));
    return 0;
}