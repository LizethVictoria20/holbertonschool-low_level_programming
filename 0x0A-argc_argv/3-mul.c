#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function
 * @argc: Variable neccesary
 * @argv: Pointer
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
