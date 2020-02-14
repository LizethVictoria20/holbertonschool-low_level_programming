#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: Variable
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
