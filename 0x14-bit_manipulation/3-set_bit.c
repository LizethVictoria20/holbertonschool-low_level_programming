#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - Function that sets the value of a bit
 * @n: Elements
 * @index: Ele
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= 1 << index;
	return (1);
}
