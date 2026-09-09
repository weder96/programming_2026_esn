#include <stdio.h>

void printLogPairs(int n) {
    for (int i = 1; i <= n; i *= 2) {
        for (int j = 1; j <= n; j *= 2) {
            printf("(%d, %d) ", i, j);
        }
    }
    printf("\n");
}

int main() {
    int n = 8;
    printf("Pares ordenados gerados (n = %d):\n", n);
    printLogPairs(n);     
    return 0;
}