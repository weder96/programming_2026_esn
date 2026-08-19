unsigned int pow_10(unsigned int power)

/*
1. The pow_10 function takes a single argument, power, which is an unsigned int.
2. The pow_10 function returns an unsigned int.
3. The pow_10 function calculates the result of 10 raised to the power of power.
4. The pow_10 function returns the result of the calculation.
*/

unsigned int count_sort(int *array, size_t size, unsigned int digit)

1. First, we initialize an array of 10 integers to 0. This array will be used to count the number of occurrences of each digit.
2. Next, we create a copy of the original array. We will use this copy to sort the original array.
3. We iterate through the original array and count the number of occurrences of each digit.
4. We iterate through the count array and store the cumulative sum of the counts.
5. We iterate through the original array and place each element in the copy array based on the count array.
6. We free the copy array and return the value of the sort flag.

void radix_sort(int *array, size_t size)

1. The outer loop is used to determine the number of passes required to sort the array.
2. The inner loop is used to perform the sorting.
3. The count_sort() function is called to perform the sorting.
4. The print_array() function is called to print the sorted array.
