#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int letterSrc, letterDest = 0;
	int i;

	while (src[letterSrc] != 0)
	{
		letterSrc++;
        }
	while (dest[letterDest] != 0)
	{
		letterDest++;
	}
	for (i = 0; i < letterSrc; i++)
	{
		dest[letterDest + i] = src[i];
	}
	dest[letterDest + i] = 0;
	return (dest);
}
