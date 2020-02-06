#include <stdio.h>
/**
 * main - main block
 * Description: Printing alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter <= 'a')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
