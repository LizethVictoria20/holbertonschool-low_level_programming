#include "holberton.h"

/**
 * append_text_to_file - check the code for Holberton School students.
 * @filename: Name my file
 * @text_content: text
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fb, length, fbwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fb = open(filename, O_WRONLY | O_APPEND);

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
	close(fb);
	return (1);
}
