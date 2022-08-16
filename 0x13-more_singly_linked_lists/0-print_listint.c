#include "lists.h"
/**
 * Write a function that prints all the elements of a listint_t list.
 * @h: pointer to the head
 *
 * Returns: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("\n%d\n", h -> n);
		h = h -> next;
		count++;
	}
	return (count);
}
