void swap_ints(int *a, int *b)

1. The function swap_ints() takes two integers as arguments and swaps their values.
2. The function uses a temporary variable to store the value of the first argument.
3. The function then assigns the value of the second argument to the first argument.
4. The function then assigns the value of the temporary variable to the second argument.


int lomuto_partition(int *array, size_t size, int left, int right)

1. The pivot is the last element in the array.
2. We initialize two variables above and below to the leftmost and rightmost indices of the array.
3. We loop through the array, comparing each element to the pivot.
4. If the element is less than the pivot, we swap it with the element above the pivot.
5. We increment the above variable.
6. If the element is greater than the pivot, we leave it where it is.
7. If the element is less than the pivot, we swap it with the element below the pivot.
8. We increment the below variable.
9. If the element is greater than the pivot, we leave it where it is.
10. We swap the pivot with the element above the pivot.
11. We return the index of the pivot.

void lomuto_sort(int *array, size_t size, int left, int right)

1. The function takes in an array, its size, and the left and right indices of the subarray to be sorted.
2. If the subarray has more than one element, then it calls itself recursively twice:
    once to sort the left subarray and once to sort the right subarray.
3. It then calls the partition function to partition the array around a pivot element.
4. It then calls itself recursively to sort the left subarray and the right subarray of the partitioned array.

void quick_sort(int *array, size_t size)

1. The function takes in an array and its size.
2. It checks if the array is NULL or the size is less than 2.
3. If either of the above is true, it returns.
4. Otherwise, it calls the lomuto_sort function.
