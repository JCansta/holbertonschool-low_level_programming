#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_list - free all the list
 *@head: the head of the node
 *Return: return the number of nodes
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (current->next != NULL)
	{

		next_node = current->next;
		free(current);
		current = next_node;

	}
	free(current);
	next_node = NULL;
	head = NULL;
}
