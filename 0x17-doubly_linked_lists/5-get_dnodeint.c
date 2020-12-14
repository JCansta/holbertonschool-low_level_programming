#include "lists.h"
/**
 * get_dnodeint_at_index - get the n of at especific index
 * @head: the head of the list
 * @index: index to search
 * Return: the address of the new node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp->next)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
		return (NULL);
	temp = head;
	while (i < index)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
