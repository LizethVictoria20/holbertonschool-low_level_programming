#include <stdio.h>
/**
 * main - main block
 * Description: Printing number with int
 * Return: 0
 */
int main(void)
{
	int number = 0;
	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return(0);
}
