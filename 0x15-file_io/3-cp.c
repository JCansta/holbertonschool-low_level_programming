#include "holberton.h"
/**
 * main - cp command copy
 * @argc: argumments
 * @argv: string arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd, fd2;
	ssize_t fdr, fdw = 1024, fdc;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (fdw == 1024)
	{
		fdr = read(fd, buff, 1024);
		if (fdr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fdw = write(fd2, buff, fdr);

		if (fdw == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	fdc = close(fd);
		if (fdc == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	fdc = close(fd2);
		if (fdc == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
