void swap_ints(int *a, int *b)

1. The swap_ints function takes two integers as arguments and swaps their values.
2. The function uses a temporary variable to store the value of the first argument.
3. The function then assigns the value of the second argument to the first argument.
4. The function then assigns the value of the temporary variable to the second argument.

void bitonic_merge(int *array, size_t size, size_t start, size_t seq,char flow)

1. The first for loop is used to compare the elements in the first half of the
   array with the elements in the second half of the array.
2. The second for loop is used to compare the elements in the first quarter of
   the array with the elements in the second quarter of the array.
3. This process is repeated until the elements in the first quarter of the
   array are compared with the elements in the last quarter of the array.
4. The last step is to compare the elements in the first half of the array with
   the elements in the second half of the array.

void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow)

1. The first step is to create a function that will merge two sub-arrays of the array.
2. The second step is to create a function that will sort the array in a given direction.
3. The third step is to create a function that will sort the array in both directions.
4. The fourth step is to create a function that will merge the sorted sub-arrays.
5. The fifth step is to create a function that will print the array.
6. The sixth step is to create a function that will print the array in a given direction.
7. The seventh step is to create a function that will print the array in both directions.
8. The eighth step is to create a function that will call the other functions.

void bitonic_sort(int *array, size_t size)

1. The function bitonic_sort() takes an array and its size as parameters.
2. If the array is NULL or the size is less than 2, the function returns.
3. The function calls bitonic_seq() to sort the array.
4. The function bitonic_seq() takes the array, its size, the start index, the end index, and the direction as parameters.
5. The function bitonic_seq() sorts the array by calling bitonic_compare() and bitonic_merge().
6. The function bitonic_compare() compares the elements in the array.
7. The function bitonic_merge() merges the elements in the array.
8. The function bitonic_seq() sorts the array by calling bitonic_compare() and bitonic_merge().
9. The function bitonic_compare() compares the elements in the array.
10. The function bitonic_merge() merges the elements in the array.


