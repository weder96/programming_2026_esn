void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)

1. First, we swap the pointers to the next and previous nodes.
2. Then, we update the pointers to the previous and next nodes of the nodes
that were swapped.
3. Finally, we update the head of the list if the node that was swapped was
the head.

void insertion_sort_list(listint_t **list)

1. The function starts by checking if the list is NULL or if the list is empty.
2. If the list is empty, the function returns.
3. The function then iterates through the list, starting with the second element.
4. The function creates a temporary pointer to the next element in the list.
5. The function then creates a pointer to the previous element in the list.
6. The function then iterates through the list, starting with the second element.
7. The function checks if the current element is less than the previous element.
8. If the current element is less than the previous element, the function swaps the nodes.
9. The function then prints the list.
10. The function then returns.