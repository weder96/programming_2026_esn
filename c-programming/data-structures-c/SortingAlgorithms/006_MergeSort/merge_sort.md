void merge_subarr(int *subarr, int *buff, size_t front, size_t mid, size_t back)

1. The merge_subarr() function takes in the subarray, a buffer array, and the
   start and end indices of the subarray.
2. It then prints out the subarray.
3. It then loops through the subarray and compares the elements.
4. If the element at the front of the subarray is smaller than the element at
   the back of the subarray, it copies the element at the front of the subarray
   into the buffer array.
5. If the element at the front of the subarray is larger than the element at the
   back of the subarray, it copies the element at the back of the subarray into
   the buffer array.
6. It then copies the buffer array back into the subarray.
7. It then prints out the subarray.


[void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back)
AND
void merge_sort(int *array, size_t size)]

1. The merge_sort_recursive function is the recursive function that will be called by the merge_sort function.
2. The merge_sort_recursive function takes in the array, a buffer array, and the start and end indices of the subarray.
3. If the size of the subarray is greater than 1, then it will call itself twice, once for the left half and once for the right half.
4. The merge_subarr function is called by the merge_sort_recursive function.
5. The merge_subarr function takes in the array, a buffer array, the start and end indices of the left and right halves of the subarray, and the end index of the subarray.
6. The merge_subarr function will merge the left and right halves of the subarray into the buffer array.
7. The merge_subarr function will then copy the buffer array back into the original array.
8. The merge_sort function takes in the array and the size of the array.
9. If the array is NULL or the size is less than 2, then it will return.
10. The merge_sort function will allocate a buffer array.
11. The merge_sort function will call the merge_sort_recursive function with the array, the buffer array, and the start and end indices of the array.
12. The merge_sort function will free the buffer array.

It sorts the array in ascending order.
It sorts the array in place.

