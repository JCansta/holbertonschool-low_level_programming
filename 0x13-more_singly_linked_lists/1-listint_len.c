#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *listint_len - print the numbers of every node
 *@h: the head of the node
 *Return: return the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
