#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name
 * @f: the function will print the name
 * Return: Always 0.
 */


void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
