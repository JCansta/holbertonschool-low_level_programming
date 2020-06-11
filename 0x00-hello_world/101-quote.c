#include <stdio.h>
/*
 * 101-quote.c - this gonna display an array
 * char: this function display an array
 *
 * Description: this use a command to display an array and next return
 * section header: idk
 */

/**
 * main-principal function, this display a array
 * Return: the return is a string
 */
int main (void)
{
	char *s="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	while (*s) putchar(*s++);
	return 0;
}
