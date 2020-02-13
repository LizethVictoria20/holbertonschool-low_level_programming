#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int lim = 1;

	if (n > 0)
	{
		while (lim <= n)
		{
			_putchar(95);
			lim++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
