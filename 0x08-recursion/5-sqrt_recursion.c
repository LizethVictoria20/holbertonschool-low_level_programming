#include "holberton.h"

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: Variable
 * Return: Always 0.
 */

/**
Write a function that returns the natural square root of a number.

Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1*/

int _sqrt_recursion(int n)
{
	int b;
	if (b == (n * n))
		return (n);
	if (n  * n  >  b)
		return (-1);
	return (_sqrt_recursion(n + 1));
}
