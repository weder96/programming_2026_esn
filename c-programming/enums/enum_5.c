#include <stdio.h>
#include <stdlib.h>

typedef unsigned int positivos[5];

int main()
{
    positivos v;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor de v[%d]:", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 5; i++)
        printf("Valor de v[%d]: %d\n", i, v[i]);

    system("exit");
    return 0;
}
