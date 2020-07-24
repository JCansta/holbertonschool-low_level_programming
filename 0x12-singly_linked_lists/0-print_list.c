#include "lists.h"
#include <stdio.h>
/**
 *print_list - print all elements of a list
 *@h: head of the file to move in the nodes
 *Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	int nod = 0, itemp;
	char *temp;

	while (h != NULL)
	{
		temp = h->str;
		itemp = h->len;
		if (temp == NULL)
		{
			temp = "(lib)";
			itemp = 0;
		}
		printf("[%d] %s\n", itemp, temp);
		h = h->next;
		nod++;
	}
	return (nod);
}
