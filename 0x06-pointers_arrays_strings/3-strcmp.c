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
	int cont = 0, cont2 = 0, dif;

	while (*primer != '\0')
	{
		cont = cont + *primer;
		primer++;
	}
	while (*segund != '\0')
	{
		cont2 = cont2 + *segund;
		segund++;
	}
	dif = cont - cont2;

	return (dif);
}
