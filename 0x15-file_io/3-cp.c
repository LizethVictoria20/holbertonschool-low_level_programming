#include "holberton.h"

/**
 * close_file1 - check the code for Holberton School students.
 * @text: file
 * Return: Always 0.
 */

void close_file1(int text)
{
	int close_file;

	close_file = close(text);

	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", text);
		exit(100);
	}
}

/**
 * main - check the code for Holberton School students.
 * @ac: file
 * @argv: Arguments
 * Return: Always 0.
 */

int main(int ac, char **argv)
{
	int read_file, write_file;
	int from_file, to_file;
	int buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	to_file = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	for (read_file = 1024; read_file == 1024;)
	{
		read_file = read(from_file, buff, 1024);
		if (read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_file = write(to_file, buff, read_file);
		if (write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file1(to_file);
	close_file1(from_file);
	return (0);
}
