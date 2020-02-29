#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			suma += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
		}
	}
	printf("%d\n", suma);
}
