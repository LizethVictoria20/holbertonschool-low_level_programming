#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */
int main(int argc, char *argv[])
{
	int i;
	int suma;

	if (argv == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '1' && *argv[i] <= '9')
		{
			suma += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", suma);
	return (0);
}
