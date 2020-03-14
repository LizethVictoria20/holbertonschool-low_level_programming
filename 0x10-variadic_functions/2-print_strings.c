#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that add strings.
 * @separator: Variable
 * @n: Variable
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *str;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && (i < (n - 1)))
		{
			printf("%s", separator);
		}

	}
	printf("\n");
}
