#include <stdio.h>

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d \n", i);
    }
}

int main() {
   printNumbers(10);
   return 0;
}