#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *get_nodeint_at_index - return the pointer to the number node of index say
 *@head: the head of the node
 *@index: the number of the node to return
 *Return: the pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL && i < index)
		return (NULL);
	return (head);
}
