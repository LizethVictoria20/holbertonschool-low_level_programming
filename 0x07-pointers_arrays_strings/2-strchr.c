#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - check the code for Holberton School students.
 * @s: Pointer
 * @c: Variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0';  i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
