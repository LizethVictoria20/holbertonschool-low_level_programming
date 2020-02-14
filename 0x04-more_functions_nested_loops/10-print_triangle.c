#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: Variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int l;
	int colum;
	int ne;

	for (l = 0; l < size; l++)
	{
		for (colum = 0; colum < size; colum++)
		{
			ne = size - (l + 1);
			if (colum < ne)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
