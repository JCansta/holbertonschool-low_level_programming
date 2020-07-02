#include "holberton.h"
#include <stdio.h>
/**
 * set_string - cambia la direccion guardada en *s.
 * @s: double pointer to string
 * @to: pointer to string
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
