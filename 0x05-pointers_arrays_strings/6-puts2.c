#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: Pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	for (i = 0; i <= str[i]; i += 2)
	{
		if(str[i] != '\0')
			_putchar(str[i]);
	}
	_putchar('\n');
}
