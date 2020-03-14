#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that add all numbers.
 * @n: Variable
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	va_start(args, n);

	if (n != 0)
	{
		sum = 0;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
	}

	else
	{
		return (0);
	}
	va_end(args);
	return (sum);
}
