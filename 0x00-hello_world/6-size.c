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
        printf ("Size of a char:", sizeof(char));
	printf ("Size of an int:", sizeof(int));
	printf ("Size of a long int:", sizeof(long int));
	printf ("Size of a long long int:", sizeof(long long int));
	printf ("Size of a float:", sizeof(float));
        return (0);
}
