#include "holberton.h"
/**
 * main - check the code for Holberton School students.
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
