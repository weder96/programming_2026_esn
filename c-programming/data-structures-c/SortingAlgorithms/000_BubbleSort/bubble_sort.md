### `void swap_ints(int *a, int *b)`

1. The function `swap_ints()` takes two integers as arguments and swaps their values.
2. The function uses a temporary variable to store the value of the first argument.
3. The function then assigns the value of the second argument to the first argument.
4. The function then assigns the value of the temporary variable to the second argument.

---

### `void bubble_sort(int *array, size_t size)`

1. The function takes two arguments: an array of integers and the size of the array.
2. The function checks to make sure the array is not `NULL` and that the size is greater than 1.
3. The function initializes a variable named `bubbly` to `false`.
4. The function initializes a variable named `len` to the size of the array.
5. The function enters a `while` loop that will run as long as `bubbly` is `false`.
6. The function enters a `for` loop that will run as long as `i` is less than `len - 1`.
7. The function checks to see if the value at `array[i]` is greater than the value at `array[i + 1]`.
8. If the value at `array[i]` is greater than the value at `array[i + 1]`, the function swaps the values at `array[i]` and `array[i + 1]`.
9. The function prints the array.
10. The function sets `bubbly` to `false`.
11. The function decrements `len` by 1.
12. The function exits the `while` loop.
13. The function returns.

---

### Print Array Function

1. The function takes two parameters: an array of integers and the size of the array.
2. The function prints the array elements, separated by commas.
3. The function returns nothing.


Tasks
-----

### 0\. Bubble sort

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://weder96/rltoken/awhP8BhtkGi-lwmMc2-KAw "Bubble sort") algorithm

-   Prototype: `void bubble_sort(int *array, size_t size);`
-   You're expected to print the `array` after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

```C
weder@/tmp/sort$ cat main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
weder@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 bubble_sort.c main.c print_array.c -o bubble
weder@/tmp/sort$ ./bubble

+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|    24 |    61 |    88 |    35 |    91 |    42 |    17 |    76 |    59 |     8 |
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+

24, 61, 35, 88, 91, 42, 17, 76, 59, 8
24, 61, 35, 88, 42, 91, 17, 76, 59, 8
24, 61, 35, 88, 42, 17, 91, 76, 59, 8
24, 61, 35, 88, 42, 17, 76, 91, 59, 8
24, 61, 35, 88, 42, 17, 76, 59, 91, 8
24, 61, 35, 88, 42, 17, 76, 59, 8, 91
24, 35, 61, 88, 42, 17, 76, 59, 8, 91
24, 35, 61, 42, 88, 17, 76, 59, 8, 91
24, 35, 61, 42, 17, 88, 76, 59, 8, 91
24, 35, 61, 42, 17, 76, 88, 59, 8, 91
24, 35, 61, 42, 17, 76, 59, 88, 8, 91
24, 35, 61, 42, 17, 76, 59, 8, 88, 91
24, 35, 42, 61, 17, 76, 59, 8, 88, 91
24, 35, 42, 17, 61, 76, 59, 8, 88, 91
24, 35, 42, 17, 61, 59, 76, 8, 88, 91
24, 35, 42, 17, 61, 59, 8, 76, 88, 91
24, 35, 17, 42, 61, 59, 8, 76, 88, 91
24, 35, 17, 42, 59, 61, 8, 76, 88, 91
24, 35, 17, 42, 59, 8, 61, 76, 88, 91
24, 17, 35, 42, 59, 8, 61, 76, 88, 91
24, 17, 35, 42, 8, 59, 61, 76, 88, 91
17, 24, 35, 42, 8, 59, 61, 76, 88, 91
17, 24, 35, 8, 42, 59, 61, 76, 88, 91
17, 24, 8, 35, 42, 59, 61, 76, 88, 91
17, 8, 24, 35, 42, 59, 61, 76, 88, 91
8, 17, 24, 35, 42, 59, 61, 76, 88, 91

+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|     8 |    17 |    24 |    35 |    42 |    59 |    61 |    76 |    88 |    91 |
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+



weder@/tmp/sort$

```
