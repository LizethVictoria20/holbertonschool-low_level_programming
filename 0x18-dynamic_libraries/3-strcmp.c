#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: Pointer
 * @s2: Pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != 0; a++)
	{
	}
	for (a = 0; s2[a] != 0; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
