#include <stdio.h>
#include "holberton.h"
/**
 * create_file - create a file
 * @filename: the text
 * @text_content: the amount of letters
 * Return: how many letters print
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int df, dfw, len = 0;

	if (filename == NULL)
		return (-1);
	df = open(filename, O_WRONLY | O_APPEND);
	if (df == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len] != '\0')
		len++;
	dfw = write(df, text_content, len);
	if (dfw == -1)
		return (-1);
	close(df);
	return (1);
}
