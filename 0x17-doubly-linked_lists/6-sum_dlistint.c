#include "lists.h"
/**
 * sum_dlistint - sum all the number of each node
 * @head: the head of the list
 * Return: the sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (count = 0; head != NULL; count++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
