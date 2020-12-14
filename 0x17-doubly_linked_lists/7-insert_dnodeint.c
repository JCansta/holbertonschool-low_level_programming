#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the head of the list
 * @idx: index
 * @n: n value
 * Return: the sum of all nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count =  0;

	if (temp == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	temp = *h;
	while (temp)
	{
		temp = temp->next;
		count++;
		if (count == idx)
		{
			if (temp == NULL)
			{
				free(new);
				new = add_dnodeint_end(h, n);
				return (new);
			}
			new->next = temp;
			temp->prev->next = new;
			new->prev = temp->prev;
			temp->prev = new;
			return (new);
		}
	}
	return (NULL);
}
