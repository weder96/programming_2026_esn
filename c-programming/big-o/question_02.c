#include <stdio.h>

void printPairs(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("(%d, %d)\n", i, j);
        }
    }
}

int main(void) {
    int n = 3;
    printf("Pares para n = %d:\n", n);
    printPairs(n);
    
    return 0;
}