#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */
/**
*_strdup - return a pointer to a new allocated space
*@str: give us the leng of the array
*Return: the pointer to the new string
*/

char *_strdup(char *str)
{
	char *dst = malloc(strlen(str) + 1);

	if (dst == NULL)
	{
		return (NULL);
	}
	strcpy(dst, str);

	return (dst);
}
