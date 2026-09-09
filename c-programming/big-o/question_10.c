#include <stdio.h>

void printDecreasingSteps(int n) {
    for (int i = 1; i <= n; i *= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
    }
    printf("\n");
}

int main() {
    int n = 8;
    printf("Asteriscos gerados (n = %d):\n", n);
    printDecreasingSteps(n); 
    // Saida esperada: * (para i=1) + ** (para i=2) + 
    //**** (para i=4) + ******** (para i=8) = 15 asteriscos seguidos
    return 0;
}