#include <stdio.h>
/**
 * main - main block
 * Description: Printing number with int
 * Return: 0
 */
int main(void)
{
	int number;
	int number2;
	int number3;

	for (number = 0; number < 100; number++)
	{
		number2 = number / 10;
		number3 = number % 10;

		putchar(number2 + '0');
		putchar(number3 + '0');

		if (number < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
