void swap_ints(int *a, int *b)

1. The function swap_ints() takes two integers as arguments and swaps their values.
2. The function uses a temporary variable to store the value of the first argument.
3. The function then assigns the value of the second argument to the first argument.
4. The function then assigns the value of the temporary variable to the second argument.

void shell_sort(int *array, size_t size)

1. First, we initialize the gap to 1.
2. Then, we calculate the gap by multiplying it by 3 and adding 1.
3. Then, we calculate the gap by dividing it by 3.
4. Then, we loop through the array, starting from the gap and going to the end of the array.
5. Inside the loop, we initialize j to i.
6. Then, we check if j is greater than or equal to the gap and if the value at array[j - gap]
    is greater than the value at array[j].
7. If the above condition is true, we swap the values at array[j] and array[j - gap].
8. Then, we decrement j by the gap.
9. Finally, we print the array.
