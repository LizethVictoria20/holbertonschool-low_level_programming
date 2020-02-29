#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 *@n: Variable
 * Return: Always 0.
 */

int _abs(int n)
{
	int m;

	if (n < 0)
	{
		m = n * -1;
		return (m);
	}
	else
	{
		m = n;
		return (m);
	}
}
