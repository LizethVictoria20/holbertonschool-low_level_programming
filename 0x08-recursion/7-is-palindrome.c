#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * aux_palin - check the code for Holberton School students.
 * @s: Pointer
 * @i: Variable
 * @len: Variable
 * Return: Always 0.
 */
int aux_palin(char *s, int i, int len)
{
	if (i >= len)
	{
		return (1);
	}
	if (s[i] == s[len])
	{
		return (aux_palin(s, i + 1, len - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(*s);

	return (aux_palin(*s, i, len));
}
