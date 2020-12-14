#include "lists.h"
/**
 * add_dnodeint_end -will add a new node at the end
 * @head: the head of the list
 * @n: the number to add with the node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
