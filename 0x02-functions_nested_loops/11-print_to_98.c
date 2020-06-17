#include "holberton.h"
#include <stdio.h>

/* more headers goes there */
/**
*print_to_98-prototype function,
*function
*@n: a number from another function
*Return: the return of finish file
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d",i);
			if ( i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (int j = n; j >= 98; j--)
		{
			printf("%d", j);
			if ( j != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
