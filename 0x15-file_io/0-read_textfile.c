#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: Name my file
 * @letters: Cantidad de letras
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *space;
	ssize_t fdread, fdwrite;

	if (filename == NULL)
	{
		return (0);
	}

	space = malloc(sizeof(char) * letters);

	if (space == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	fdread = read(fd, space, letters);

	if (fdread == -1)
	{
		return (-1);
	}

	fdwrite = write(STDOUT_FILENO, space, fdread);

	if (fdwrite == -1)
	{
		return (-1);
	}

	return (fdread);
}
