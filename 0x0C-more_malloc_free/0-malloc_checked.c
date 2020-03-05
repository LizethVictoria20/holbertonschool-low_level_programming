#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *str;
	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
