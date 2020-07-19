#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - print all stirngs
 *@separator: the character between the words
 *@n: values of arguments
 *Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *word;

	if (separator == NULL)
		separator = "";
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(string, char*);

		if (!word)
			printf("(nil)");
		else
			printf("%s", word);
		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(string);
}
