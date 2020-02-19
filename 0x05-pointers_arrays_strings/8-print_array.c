#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		if (i < n)
		{
			printf("%d, ", a[i]);
			i++;
		}
	}
	putchar('\n');
}
