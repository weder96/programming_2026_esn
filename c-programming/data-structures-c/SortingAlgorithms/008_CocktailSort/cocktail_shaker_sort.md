Cocktail Sort list

void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker)

1. First, we swap the node pointed to by shaker with the node pointed to by shaker->next.
2. Then, we update the pointers of the swapped nodes.
3. Finally, we update the pointer of the shaker node to point to the swapped node.


void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker)

1. First, we swap the node behind the shaker with the node in front of the shaker.
2. Then, we swap the node in front of the shaker with the node behind the shaker.
3. Finally, we swap the shaker with the node in front of the shaker.

void cocktail_sort_list(listint_t **list)

1. The function starts by checking if the list is NULL or if the list is empty.
2. If the list is empty, the function returns.
3. The function then creates a variable tail that points to the last node in the list.
4. The function then enters a while loop that will run as long as shaken_not_stirred is false.
5. The function then enters a for loop that will run as long as shaker is not pointing to the last node in the list.
6. The function then checks if the node pointed by shaker is greater than the node pointed by shaker->next.
7. If the node pointed by shaker is greater than the node pointed by shaker->next, the function swaps the nodes pointed by shaker and shaker->next.
8. The function then prints the list.
9. The function then sets shaken_not_stirred to false.
10. The function then enters another for loop that will run as long as shaker is not pointing to the first node in the list.
11. The function then checks if the node pointed by shaker is less than the node pointed by shaker->prev.
12. If the node pointed by shaker is less than the node pointed by shaker->prev, the function swaps the nodes pointed by shaker and shaker->prev.
13. The function then prints the list.
14. The function then sets shaken_not_stirred to false.
15. The function then returns.





