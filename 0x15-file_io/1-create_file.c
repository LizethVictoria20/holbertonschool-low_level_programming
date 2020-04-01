#include "holberton.h"

/**
 * create_file - check the code for Holberton School students.
 * @filename: Name my file
 * @text_content: text
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fb, length, fbwrite, fbclose;

	if (filename == NULL)
	{
		return (-1);
	}
	fb = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fb == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	length = 0;

	while (text_content[length] != '\0')
	{
		length++;
	}

	fbwrite = write(fb, text_content, length);

	if (fbwrite == -1)
	{
		return (-1);
	}

	fbclose = close(fb);

	if (fbclose == -1)
	{
		return (-1);
	}
	return (1);
}
