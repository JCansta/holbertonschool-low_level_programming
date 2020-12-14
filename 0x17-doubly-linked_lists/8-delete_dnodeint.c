#include "lists.h"
/**
 * delete_at_beg - delete node at beg
 * @head: head of node
 * Return: return the address of the new head
 */
dlistint_t *delete_at_beg(dlistint_t *head)
{
	dlistint_t *new = head;

	if (head->next == NULL)
	{
		free(head);
		return (NULL);
	}
	head->next->prev = NULL;
	new = head->next;
	free(head);
	return (new);
}
/**
 * delete_at_end - delete node at end
 * @end: the end of the list
 */
void delete_at_end(dlistint_t *end)
{
	end->prev->next = NULL;
	free(end);
}
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: the head of the list
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = delete_at_beg(temp);
		return (1);
	}
	while (temp->next)
	{
		if (len == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		len++;
	}
	if (index == len)
	{
		delete_at_end(temp);
		return (1);
	}
	return (-1);
}
