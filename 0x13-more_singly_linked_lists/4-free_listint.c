#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head node
 *
 * @head: a pointer to the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
