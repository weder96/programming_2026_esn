#include <stdio.h>

void printGrowingLooping(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j *= 2) {
            printf("%d ", j);
        }
    }
    printf("\n");
}

int main() {
    int n = 8;
    printf("Sequencia gerada (n = %d):\n", n);
    printGrowingLooping(n); 
    return 0;
}