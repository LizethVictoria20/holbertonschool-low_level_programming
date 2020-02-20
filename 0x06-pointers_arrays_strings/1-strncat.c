#include "holberton.h"

/**
 * *_strcat - check the code for Holberton School students.
 * @src: Pointer
 * @dest: Pointer
 * @n: Character
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int letterDest = 0;
	int i;

	while (dest[letterDest] != 0)
	{
		letterDest++;
	}

	for (i = 0; i < n; i++)
	{
		dest[letterDest + i] = src[i];
	}
	return (dest);
}
