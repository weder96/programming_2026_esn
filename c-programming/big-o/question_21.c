#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permutar(int arr[], int inicio, int fim) {
    if (inicio == fim) {
        for (int i = 0; i <= fim; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = inicio; i <= fim; i++) {
        trocar(&arr[inicio], &arr[i]);
        permutar(arr, inicio + 1, fim);
        trocar(&arr[inicio], &arr[i]); // backtracking
    }
}

int main() {
    // Vetor de teste. Evite arrays muito grandes, pois o crescimento é fatorial.
    int arr[] = {1, 2, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Permutacoes do array (n = %d):\n", n);
    permutar(arr, 0, n - 1);
    
    return 0;
}