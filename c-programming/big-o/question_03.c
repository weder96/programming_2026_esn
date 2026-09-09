#include <stdio.h>

void cubicLoop(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                printf("%d - %d - %d \n", i, j, k);
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n = 3;
    printf("Executando cubicLoop para n = %d:\n", n);
    cubicLoop(n);
    return 0;
}