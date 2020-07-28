#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint2 - free the mallocs used to create new nodes
 *@head: the head of the node
 *Return: the address of new element
 */

void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *behind;

	if (head == NULL)
	{
		free(head);
		return;
	}
	behind = *head;
	while (behind != NULL)
	{
		new = behind->next;
		free(behind);
		behind = new;
	}
	*head = NULL;
}
