#include "holberton.h"
/**
 *rev_string - print in rev
 *@s: give the pointing direction
 *Return: Always 0.
 */

void rev_string(char *s)
{
	char temp;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
