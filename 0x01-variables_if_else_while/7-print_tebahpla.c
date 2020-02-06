#include <stdio.h>
/**
 * main - main block
 * Description: Printing alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
