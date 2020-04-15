#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * aux_palin - check the code for Holberton School students.
 * @s: Pointer
 * @len: Variable
 * Return: Always 0.
 */
int aux_palin(char *s, int len)
{
	if (len <= 0)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		return (aux_palin(s + 1, len - 2));
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
	int len = _strlen_recursion(s);

	return (aux_palin(s, len));
}
