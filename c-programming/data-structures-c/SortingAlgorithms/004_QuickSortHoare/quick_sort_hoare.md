void swap_ints(int *a, int *b)

1. The function swap_ints() takes two integers as arguments and swaps their values.
2. The function uses a temporary variable to store the value of the first argument.
3. The function then assigns the value of the second argument to the first argument.
4. The function then assigns the value of the temporary variable to the second argument.


int hoare_partition(int *array, size_t size, int left, int right)

1. The pivot is the last element in the array.
2. The above variable is initialized to the first element in the array.
3. The below variable is initialized to the last element in the array.
4. The do-while loop is used to move the above variable to the right until it finds an element that is greater than the pivot.
5. The do-while loop is used to move the below variable to the left until it finds an element that is less than the pivot.
6. If the above and below variables are not equal, then swap the elements at the above and below variables.
7. Return the above variable.

void hoare_sort(int *array, size_t size, int left, int right)

1. The first line of the function is the header for the function.
2. The second line is the function’s return type.
3. The third line is the function’s name.
4. The fourth line is the function’s parameters.
5. The fifth line is the function’s body.

void quick_sort_hoare(int *array, size_t size)

1. The function takes in an array and its size.
2. If the array is NULL or the size is less than 2, it returns.
3. The function calls the hoare_sort function with the array, size, and the start and end indices.
