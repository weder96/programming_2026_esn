#include <stdio.h>
#include <time.h>

void complexLooping(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                int x = 1;
                while (x <= k) {
                    x *= 2;
                }
            }
        }
    }
}

int main() {
    int n = 100;
    printf("Iniciando processamento (n = %d)...\n", n);
    
    // Medindo o tempo de execução para provar o esforço computacional
    clock_t inicio = clock();
    complexLooping(n);
    clock_t fim = clock();
    
    double tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Processamento concluido em %f segundos.\n", tempo_gasto);
    
    return 0;
}