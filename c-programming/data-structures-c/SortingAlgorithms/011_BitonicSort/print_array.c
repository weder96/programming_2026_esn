#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}


/**
 * print_array_rect - Imprime um array de inteiros dentro de retângulos (caixas)
 *
 * @array: O array a ser impresso
 * @size: Número de elementos no @array
 */
void print_array_box(const int *array, size_t size) {
    size_t i;

    /* Se o array for nulo ou vazio, não imprime nada */
    if (!array || size == 0)
    {
        printf("\n");
        return;
    }

    /* 1. Imprime a borda superior */
    for (i = 0; i < size; i++)
    {
        printf("+-------");
    }
    printf("+\n");

    /* 2. Imprime os números com as paredes laterais */
    for (i = 0; i < size; i++)
    {
        /* %5d garante que o número ocupe sempre 5 espaços, mantendo a caixa alinhada */
        printf("| %5d ", array[i]);
    }
    printf("|\n");

    /* 3. Imprime a borda inferior */
    for (i = 0; i < size; i++)
    {
        printf("+-------");
    }
    printf("+\n");
}
