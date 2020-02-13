#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int lim;

	if (n > 0)
	{
		lim = 1;
		while (lim <= n)
		{
			_putchar(45);
			lim++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
