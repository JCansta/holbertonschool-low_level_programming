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

	if (head == NULL)
	{
		free(head);
		return;
	}
/*
*	while (head != NULL)
*	{
*		free(head->str);
*		free(head);
*		head = head->next;
*	}
*/
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{

		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;

	}
	next_node = NULL;
	head = NULL;
}
