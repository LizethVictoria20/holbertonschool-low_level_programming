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
	int i = 0;

	while (str[i] != 0)
	{
		i++;
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

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	size1 = strleng(s1);
	size2 = strleng(s2) + 1;
	strConc = size1 + size2;

	s =  malloc(sizeof(char) * strConc);
	i = 0;

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		s[i + size1] = s2[i];
	}
	return (s);
}
