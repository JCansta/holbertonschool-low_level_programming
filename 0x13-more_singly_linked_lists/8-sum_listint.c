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
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
