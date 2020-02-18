#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int letter;
	int leng = 0;
	char letter2;

	while (s[i] != '\0')
	{
		++leng;
		i++;
	}
	for (letter = 0; letter <= leng / 2; letter++)
	{
		letter2 = s[letter];
		s[letter] = s[leng - letter - 1];
		s[leng - letter - 1] = letter2;
	}
}
