#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_listint - print the numbers of every node
 *@h: the head of the node
 *Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
