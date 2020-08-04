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
	int fd;
	char buf[letters];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fd = read(fd, buf, sizeof(char) * letters);
	buf[letters - 1] = '\0';
	if (fd == -1)
		return (0);
	fd = write(STDOUT_FILENO, buf, fd);
	if (fd == -1)
		return (0);
	close(fd);
	return (fd);
}
