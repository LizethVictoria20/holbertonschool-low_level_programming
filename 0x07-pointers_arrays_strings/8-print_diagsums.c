#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: Pointers
 * @size: Variable
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sumai, sumaj;
	int i, j;

	for (i = 0; i < size; i++)
	{
		sumai += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		sumaj += a[(size - 1) * (j + 1)];
	}
	printf("%d %d\n", sumai, sumaj);
}
