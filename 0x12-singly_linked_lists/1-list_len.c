#include "lists.h"
#include <stdio.h>
/**
 *print_list - print all elements of a list
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
