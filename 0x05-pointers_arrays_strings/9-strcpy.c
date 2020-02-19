#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @dest: Pointer
 * @src: Pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int letter = 0;
	int i;

	while (src[letter] != '\0')
	{
		letter++;
	}

	for (i = 0; i <= letter; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i == letter; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
