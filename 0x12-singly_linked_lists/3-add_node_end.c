#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - add a new node at the end
 *@head: the head of the node
 *@str: the new string to enter
 *Return: return the number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new;
	char *c;
	int i = 0;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	c = strdup(str);
	while (c[i] != '\0')
		i++;
	new->str = c;
	new->len = i;
	new->next = NULL;
	return (new);

}
