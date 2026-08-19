/*
11) A multiplicação de dois números inteiros pode ser feita através de somas
sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a
multiplicação de dois inteiros.
*/


#include <stdio.h>

int Multip_Rec(int n1, int n2) {
    // Condição de parada: qualquer número multiplicado por 0 é 0
    // (Ou seja, somar o n1 zero vezes resulta em 0)
    if (n2 == 0) {
        return 0;
    }
    
    // Passo recursivo: n1 + (n1 somado n2-1 vezes)
    return n1 + Multip_Rec(n1, n2 - 1);
}


int main() {    
    int num1 = 10;
    int num2 = 3;
    printf("%d x %d = %d\n", num1, num2, Multip_Rec(num1, num2));
    return 0;
}