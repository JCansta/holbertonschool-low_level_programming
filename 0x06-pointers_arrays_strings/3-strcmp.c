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
	int cont;

	while (*primer != '\0' && *segund != '\0')
	{
		cont = (*primer != *segund) ? (*primer - *segund) : 0;
			primer++;
			segund++;

		if (*primer != *segund)
			break;
	}

	return (cont);
}
