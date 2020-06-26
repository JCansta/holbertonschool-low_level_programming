#include "holberton.h"
/**
 * _strcmp - .
 * @s1: bring a direction.
 * @s2: bring a direction.
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	char *primer = s1;
	char *segund = s2;
	int cont = 0;

	while (*primer != '\0' && *segund != '\0')
	{

		cont = (*primer != *segund) ? (*primer - *segund) : 0;

		if (*primer != *segund)
			break;

		primer++;
		segund++;
	}

	return (cont);
}
