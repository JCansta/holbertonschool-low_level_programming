#include "holberton.h"
/**
 *rev_string - print in rev
 *@s: give the pointing direction
 *Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0, k = 0;
	int a = (sizeof(s) / sizeof(s[0]));
	char rev[a];

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (; i >= 0; i--)
	{
		rev[k] =  s[i];
		k++;
	}

	i = 0;

	while (i < k)
	{
		s[i] = rev[i];
		i++;
	}
}
