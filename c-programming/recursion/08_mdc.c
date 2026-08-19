/**
 
8) O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e
y. Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x
e y. O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso
contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.

 */

#include <stdio.h>

int mdc(int x, int y) {
    // Condição de parada (Caso Base)
    if (y == 0) {
        return x;
    }
    
    // Passo recursivo: o x passa a ser o y, e o y passa a ser o resto
    return mdc(y, x % y);
}


int main() {    
    int x = 48;
    int y = 18;
    printf("mdc(%d, %d) = %d\n", x, y, mdc(x, y));
    return 0;
}



//Faça o teste de mesa com mdc(48, 18).
//1ª chamada: mdc(48, 18) -> 48 % 18 = 12
//2ª chamada: mdc(18, 12) -> 18 % 12 = 6
//3ª chamada: mdc(12, 6) -> 12 % 6 = 0
//4ª chamada: mdc(6, 0) -> retorna 6.