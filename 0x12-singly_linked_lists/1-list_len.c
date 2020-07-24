#include "lists.h"
#include <stdio.h>
/**
 *list_len - return the number of elementes in the node
 *@h: head of the file to move in the nodes
 *Return: return the number of nodes
 */

size_t list_len(const list_t *h)
{
	int nod = 0;

	while (h != NULL)
	{
		h = h->next;
		nod++;
	}
	return (nod);
}
