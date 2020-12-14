#include "lists.h"
/**
 * free_dlistint - free all the list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
