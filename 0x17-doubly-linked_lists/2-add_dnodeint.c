#include "lists.h"
/**
 * add_dnodeint-will add a new node at the beggining
 * @head: the head of the list
 * @n: the number to add with the node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
