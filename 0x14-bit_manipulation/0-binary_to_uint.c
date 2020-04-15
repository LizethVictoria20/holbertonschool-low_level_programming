#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number to decimal.
 * @b: Elements
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int binary = 1;
	unsigned int count = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			count += binary;
		}
		binary *= 2;
		i--;
	}
	return (count);
}
