#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: Pointer
 * @n: Pointer
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n)
		{
			printf("%d", a[i]);
			i++;
		}
		if (i != n )
		{
			printf(", ");
		}
	}
	printf("\n");
}
