#include <stdio.h>
#include "holberton.h"
/**
 * create_file - create a file
 * @filename: the text
 * @text_content: the amount of letters
 * Return: how many letters print
 */
int create_file(const char *filename, char *text_content)
{
	int df, len, fd2;

	df = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (df == -1)
		return (0);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len] != '\0')
	{
		len++;
	}
	fd2 = write(df, text_content, len);
	if (fd2 == -1)
		return (-1);
	close(df);
	return (1);
}
