void swap_ints(int *a, int *b)

1. The function swap_ints() takes two integers as arguments and swaps their values.
2. The function uses a temporary variable to store the value of the first argument.
3. The function then assigns the value of the second argument to the first argument.
4. The function then assigns the value of the temporary variable to the second argument.

void max_heapify(int *array, size_t size, size_t base, size_t root)

1. The function max_heapify() takes an array, its size, and the index of the root node as arguments.
2. It first checks if the left child of the root node exists and if it is greater than the root node. If so, it makes the left child the new root node.
3. It then checks if the right child of the root node exists and if it is greater than the root node. If so, it makes the right child the new root node.
4. If the left or right child is not the new root node, it swaps the root node with the larger of the two children.
5. It then recursively calls max_heapify() on the new root node.

void heap_sort(int *array, size_t size)

1. The first for loop is used to create a max heap.
2. The second for loop is used to sort the array.
3. The max_heapify function is used to create a max heap.
4. The swap_ints function is used to swap the elements of the array.
5. The print_array function is used to print the array.
