#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head node
 *
 *  Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
