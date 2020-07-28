#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *insert_nodeint_at_index - insert a node int idx position
 *@head: the head of the node
 *@idx: the position where the ndoe is gonna in
 *@n:the n data value to save
 *Return: the add of everything
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *behind;
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	current = *head;
	while (current != NULL && i < idx)
	{
		behind = current;
		current = current->next;
		i++;
	}
	if (current == NULL && i < idx)
	{
		free(new);
		return (NULL);
	}
	if (current == NULL)
	{
		new->n = n;
		behind->next = new;
		new->next = NULL;
		return (new);
	}
	new->n = n;
	new->next = current;
	behind->next = new;
	return (new);
}
