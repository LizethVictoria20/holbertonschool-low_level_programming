#include <stdio.h>
/**
 * main - main block
 * Description: Print alphabet in uppercase and lowercase
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
	return (0);
}
