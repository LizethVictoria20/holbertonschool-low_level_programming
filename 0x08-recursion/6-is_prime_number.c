#include "holberton.h"
#include <stdio.h>

/**
 * is_prime - check the code for Holberton School students.
 * @a: Variable
 * @b: Variable
 * Return: Always 0.
 */
int is_prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (is_prime(a, b + 1));
}
/**
 * is_prime_number - check the code for Holberton School students.
 * @n: Variable
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
