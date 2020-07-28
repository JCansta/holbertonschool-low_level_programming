#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint - free the mallocs used to create new nodes
 *@head: the head of the node
 *Return: the address of new element
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head->next != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}
