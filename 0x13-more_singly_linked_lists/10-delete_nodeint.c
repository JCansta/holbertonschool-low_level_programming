#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *delete_nodeint_at_index - delete a node in index position
 *@head: the head of the node
 *@index: the position where the ndoe is gonna in
 *Return: the add of everything
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *behind;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index)
	{
		behind = current;
		current = current->next;
		i++;
		if (current == NULL)
			return (-1);
	}
	behind->next = current->next;
	free(current);
	return (1);
}
