#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *pop_listint - free the head of s linked list
 *@head: the head of the node
 *Return: the data inside n
 */

int pop_listint(listint_t **head)
{
	int save;
	listint_t *current;
	listint_t *next;

	if (head == NULL)
	{
		head = NULL;
		return (0);
	}
	current = *head;
	save = current->n;
	next = current->next;
	free(current);
	*head = next;
	return (save);
}
