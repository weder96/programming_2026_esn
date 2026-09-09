#include <stdio.h>

void printPowersOfTwo(int n) {
    for (int i = 1; i <= n; i *= 2) {
        printf("%d ", i);
    }
}

int main(void) {
    int n = 32;
    printf("Potências de 2 até %d:\n", n);
    printPowersOfTwo(n);
    printf("\n");

    return 0;
}