#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - Function that converts a binary number to decimal.
 * @n: Elements
 * @index: Ele
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
