/**
7) Crie um programa em C que receba um vetor de números reais com 100 elementos.
Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor 
 */

#include <stdio.h>

// A função recebe o vetor, o índice inicial e o índice final
void inverterVetor(int vetor[], int inicio, int fim) {
    // Condição de parada: quando os índices se cruzam ou se igualam
    if (inicio >= fim) {
        return;
    }
    
    // Passo recursivo: troca as pontas e chama para o miolo do vetor
    float temp = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = temp;
    
    inverterVetor(vetor, inicio + 1, fim - 1);
}

void printVetor(float vetor[], int len){
    for(int i=0; i<len; i++){
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[5]= {10,20,30,40,50};
    int len = sizeof(vetor) / sizeof(vetor[0]);
    inverterVetor(vetor, 0, len-1);
    printVetor(vetor,len);
    return 0;
}