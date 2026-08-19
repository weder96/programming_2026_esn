void swap_ints(int *a, int *b)

1. The swap_ints function has two parameters: a and b.
2. The function creates a temporary variable called tmp.
3. The function swaps the values of a and b by assigning the value of a to tmp, then assigning the value of b to a, and finally assigning the value of tmp to b.
4. The function returns nothing.

void selection_sort(int *array, size_t size)

1. The outer loop is responsible for selecting the smallest element in the array
    and swapping it with the element in the first position.

2. The inner loop is responsible for finding the smallest element in the remaining subarray
    and swapping it with the element in the second position.

3. The inner loop continues to find the smallest element in the remaining subarray
    and swapping it with the element in the third position, and so on.

4. The outer loop then repeats the process for the remaining elements in the array.

print array function

1. The function takes two parameters: an array of integers and the size of the array.
2. The function prints the array elements, separated by commas.
3. The function returns nothing.