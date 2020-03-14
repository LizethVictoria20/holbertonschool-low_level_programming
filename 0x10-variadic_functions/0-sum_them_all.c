#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that add all numbers.
 * @n: Variable
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int suma = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(valist, unsigned int);
	}
	va_end(valist);
	return (suma);
}
