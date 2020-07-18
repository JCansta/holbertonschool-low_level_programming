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
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *word;

	if (n == 0)
		return;
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(string, char*);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(string);
}
