#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - introduction to malloc and free
 * @size: Variable
 * @c: Variable
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;
	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(c) * size);
	
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (c);
}
