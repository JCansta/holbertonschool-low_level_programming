#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint_end - add a new node at the end of the link list
 *@head: the head of the node
 *@n: the value to add to the new node
 *Return: the address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *behind;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (*head);
	}
	behind = *head;
	while (behind->next != NULL)
	{
		behind = behind->next;
	}
	behind->next = new;
	new->n = n;
	new->next = NULL;
	return (*head);
}
