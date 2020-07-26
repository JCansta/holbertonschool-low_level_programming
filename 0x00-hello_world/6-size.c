#include <stdio.h>
/*
 * size.c - this gonna display an array
 * sizeof(): this function display an array
 *
 * Description: this use a command to display an array and next return
 * section header: idk
 */

/**
 * main-principal function, this display a array
 * Return: the return of finish file
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
