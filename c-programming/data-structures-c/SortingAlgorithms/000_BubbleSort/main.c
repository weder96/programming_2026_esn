#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_array_box(const int *array, size_t size);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {24, 61, 88, 35, 91, 42, 17, 76, 59, 8};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array_box(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array_box(array, n);
    return (0);
}
