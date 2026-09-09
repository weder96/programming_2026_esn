#include <stdio.h>

void nestdLooping18(int n) {
    while (n > 1) {
        n /= 2;
    }
}

int main() {
    int n = 1024;
    printf("Iniciando processamento original (n = %d)...\n", n);
    nestdLooping18(n);
    printf("Processamento concluido.\n");
    return 0;
}