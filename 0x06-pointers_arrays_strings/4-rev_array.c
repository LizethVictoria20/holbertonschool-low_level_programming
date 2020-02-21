#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, count;

	for (i = 0, j = n - 1; j >= i; i++, j--)
	{
		count = a[i];
		a[i] = a[j];
		a[j] = count;
	}
	for (i = 0; i < n; i++)
		;
}
