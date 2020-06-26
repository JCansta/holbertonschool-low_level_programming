#include "holberton.h"
/**
 * *leet - change all lowercase to uppercase.
 * @s: bring a direction.
 * Return: Always 0.
 */

char *leet(char *s)
{
	char *p = s;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;

	while (*p != '\0')
	{
		for (i = 0; let[i] != '\0'; i++)
		{
			if (*p == let[i])
			{
				*p = num[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
