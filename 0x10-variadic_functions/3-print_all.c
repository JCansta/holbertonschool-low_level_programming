#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *_char - print a char
 *@p: the char
 *Return: a printf
 */
void _char(va_list p)
{
	printf("%c", va_arg(p, int));
}
/**
  *_integer - print a integer
  *@p: the integer
  *Return: a printf
  */
void _integer(va_list p)
{

	printf("%d", va_arg(p, int));
}
/**
 *_float - print a float
 *@p: the float
 *Return: a printf
 */
void _float(va_list p)
{
	printf("%f", va_arg(p, double));
}
/**
 *_char_pointer - prtin a string
 *@p: the string
 *Return: a printf
 */
void _char_pointer(va_list p)
{
	char *str = va_arg(p, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 *print_all - print all stirngs
 *@format: the character between the words
 *Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list _string;
	int i = 0, j = 0;
	void (*fa)(va_list);
	char *sep = "";

	arg_t func[] = {
		{"c", _char},
		{"i", _integer},
		{"f", _float},
		{"s", _char_pointer},
		{NULL, NULL}
	};

	va_start(_string, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (func[j].op != NULL)
		{
			if (format[i] == func[j].op[0])
			{
				printf("%s", sep);
				fa = func[j].f;
				(*fa)(_string);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(_string);
}
