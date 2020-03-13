#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int suma = 0;
	unsigned int i;

	va_start(valist, n);
	
	if (n == NULL)
	{
		return(0);
	}

	for (i = 0; i < n; i++)
	{
		suma += va_arg(valist, const unsigned int);
	}
	va_end(valist);
	return (suma);
}
