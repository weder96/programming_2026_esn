### `void swap_ints(int *a, int *b)`

1. The `swap_ints` function has two parameters: `a` and `b`.
2. The function creates a temporary variable called `tmp`.
3. The function swaps the values of `a` and `b` by assigning the value of `a` to `tmp`, then assigning the value of `b` to `a`, and finally assigning the value of `tmp` to `b`.
4. The function returns nothing.

---

### `void selection_sort(int *array, size_t size)`

1. The outer loop is responsible for selecting the smallest element in the array and swapping it with the element in the first position.
2. The inner loop is responsible for finding the smallest element in the remaining subarray and swapping it with the element in the second position.
3. The inner loop continues to find the smallest element in the remaining subarray and swapping it with the element in the third position, and so on.
4. The outer loop then repeats the process for the remaining elements in the array.

---

### Print Array Function

1. The function takes two parameters: an array of integers and the size of the array.
2. The function prints the array elements, separated by commas.
3. The function returns nothing.



### 2\. Selection sort

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a function that sorts an array of integers in ascending order using the [Selection sort](https://weder96/rltoken/SEbg0fBEraioQcl-igvUSw "Selection sort") algorithm

-   Prototype: `void selection_sort(int *array, size_t size);`
-   You're expected to print the `array` after each time you swap two elements (See example below)

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

```C
weder@/tmp/sort$ cat 2-main.c
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

    print_array_box(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array_box(array, n);
    return (0);
}
weder@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89
2-main.c 2-selection_sort.c print_array.c -o select
weder@/tmp/sort$ ./select
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|    24 |    61 |    88 |    35 |    91 |    42 |    17 |    76 |    59 |     8 |
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+

8, 61, 88, 35, 91, 42, 17, 76, 59, 24
8, 17, 88, 35, 91, 42, 61, 76, 59, 24
8, 17, 24, 35, 91, 42, 61, 76, 59, 88
8, 17, 24, 35, 42, 91, 61, 76, 59, 88
8, 17, 24, 35, 42, 59, 61, 76, 91, 88
8, 17, 24, 35, 42, 59, 61, 76, 88, 91

+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|     8 |    17 |    24 |    35 |    42 |    59 |    61 |    76 |    88 |    91 |
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
weder@/tmp/sort$

```

**Repo:**

-   GitHub repository: `sorting_algorithms`
-   File: `2-selection_sort.c, 2-O`

 Done? Help Check your code Ask for a new correction QA Review