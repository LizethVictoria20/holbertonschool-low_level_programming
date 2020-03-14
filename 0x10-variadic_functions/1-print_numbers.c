#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that add all numbers.
 * @separator: Variable
 * @n: Variable
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if (separator != NULL && (i < (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
