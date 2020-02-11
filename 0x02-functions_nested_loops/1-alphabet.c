#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Alphabet.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
