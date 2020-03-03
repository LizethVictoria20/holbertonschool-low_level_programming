#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * strleng - check the code for Holberton School students.
 * @str: Variable
 * Return: Always 0.
 */
int strleng(char *str)
{
	int i;

	for (i = 0; str && str[i]; i++)
	{
	}
	return (i);
}

/**
 * str_concat - Function that concatenates two strings
 * @s1: Pointer
 * @s2: Pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, strConc, i;
	char *s;

	size1 = strleng(s1);
	size2 = strleng(s2);
	strConc = size1 + size2;

	s = malloc(sizeof(char) * strConc + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1 && s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; s2 && s2[i]; i++)
	{
		s[i + size1] = s2[i];
	}
	return (s);
}
