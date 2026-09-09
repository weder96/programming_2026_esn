#include <stdio.h>

void printfTrilets(int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cont++;
            }
        }
    }
    printf("Total: %d\n", cont);
}

int main() {
    int n = 10;
    printf("Algoritmo Original (n = %d):\n", n);
    printfTrilets(n);
    return 0;
}