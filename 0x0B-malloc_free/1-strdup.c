#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strleng - check the code for Holberton School students.
 * @str: Variable
 * Return: Always 0.
 */
int strleng(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - check the code for Holberton School students.
 * @str: Variable
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int size;
	char *s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strleng(str) + 1;
	s = malloc(sizeof(char) * size);
	i = 0;

	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
