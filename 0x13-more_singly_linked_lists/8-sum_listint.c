#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *sum_listint - sum every n of the linked list
 *@head: the head of the node
 *Return: the add of everything
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
