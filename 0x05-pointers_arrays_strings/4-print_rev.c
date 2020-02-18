#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int leng;

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (i = leng; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
