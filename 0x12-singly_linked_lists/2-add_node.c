#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - add a new node
 *@head: the head of the node
 *@str: the new string to enter
 *Return: return the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *c;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	c = strdup(str);
	(void)str;
	new->str = c;
	new->len = strlen(c);
	new->next = *head;
	*head = new;
	return (new);
}
