#include "holberton.h"

/**
 * more_numers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num;
	int time;

	for (time = 0; time <= 10; time++)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
	}
}
