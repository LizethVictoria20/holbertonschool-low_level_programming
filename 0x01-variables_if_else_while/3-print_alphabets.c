#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in lowercase and uppercase on same line
 * using putchar only thrice, followed by new line
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
