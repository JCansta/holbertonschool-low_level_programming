#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct arg - struct arg
 *
 * @op: operator
 * @f: the function associated
 */
typedef struct arg
{
	char *op;
	void (*f)();
} arg_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
