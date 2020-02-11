#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *@n: Variable
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last;
	int m;

	last = n % 10;
	if (last < 0)
	{
		m = last * -1;
		_putchar(m + '0');
		return (m);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
