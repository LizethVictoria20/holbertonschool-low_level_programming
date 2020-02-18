#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - check the code for Holberton School students.
 * @str: Pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int half, max;
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	max = count;
	half = max / 2;

	while (half <= max)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
