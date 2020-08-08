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
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(argv[1], O_RDWR);

	if (fd == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (fdw == 1024)
	{
		fdr = read(fd, buff, 1024);

		if (fdr == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

		fdw = write(fd2, buff, fdr);

		if (fdw == -1)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	fdc = close(fd);
		if (fdc == -1)
			dprintf(2, "Error: Can't close fd %d\n", fd), exit(100);
	fdc = close(fd2);

		if (fdc == -1)
			dprintf(2, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
