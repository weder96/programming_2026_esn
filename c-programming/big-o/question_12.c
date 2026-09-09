#include <stdio.h>

void specialLoop(int n) {
    int s = 1;
    int i = 1;
    while (s <= n) {
        i++;
        s += i;
    }
    printf("Iterações: %d\n", i);
}

int main() {
    int n = 10;
    printf("Algoritmo Original (n = %d):\n", n);
    specialLoop(n); // Saída esperada: 5, pois a soma chega a 15 (1+2+3+4+5)
    return 0;
}