#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: Pointer
 * @accept: Pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int bef = 0;
	int i, j = 0;

	while (s[i] != '\0')
	{
		bef = count;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}

		if (count == bef)
		{
			break;
		}
		i++;
	}
	return (count);
}
