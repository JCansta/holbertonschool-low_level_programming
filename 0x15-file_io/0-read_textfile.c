#include <stdio.h>
#include "holberton.h"
/**
 * read_textfile - read and write a textfile
 * @filename: the text
 * @letters: the amount of letters
 * Return: how many letters print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo;
	ssize_t fdr, fdw, fdc;
	char *buf;

	if (filename == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	fdr = read(fdo, buf, letters);
	if (fdr < 0)
	{
		free(buf);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buf, letters);
	if (fdw < 0)
	{
		free(buf);
		return (0);
	}
	fdc = close(fdo);
	if (fdc < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (fdr);
}
