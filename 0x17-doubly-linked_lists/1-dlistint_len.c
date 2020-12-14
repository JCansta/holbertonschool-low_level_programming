#include "lists.h"
/**
 * dlistint_len - return the number of elements
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
