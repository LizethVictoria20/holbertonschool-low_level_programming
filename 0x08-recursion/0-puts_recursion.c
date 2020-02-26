#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
