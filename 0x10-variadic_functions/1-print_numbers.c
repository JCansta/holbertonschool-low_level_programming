#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_numbers - print all numbers
 *@separator: the character between the numebrs
 *@n: values of arguments
 *Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptnumber;
	unsigned int i;

	if (separator == NULL)
	{
		va_start(ptnumber, n);
		for (i = 0; i < n; i++)
		{
			printf("%d ", va_arg(ptnumber, unsigned int));
		}
	}
	else
	{
		va_start(ptnumber, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptnumber, unsigned int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptnumber);
}
