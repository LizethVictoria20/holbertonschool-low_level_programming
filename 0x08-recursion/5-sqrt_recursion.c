#include "holberton.h"

/**
 * _square - check the code for Holberton School students.
 * @a: Variable
 * @b: Variable
 * Return: Always 0.
 */

int _square(int a, int b)
{
	if (a == (b * b))
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (_square(a, b + 1));
}

/**
 * _sqrt_recursion - Function
 * @n: Variable
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (_square(n, 1));
}
