#include <stdio.h>

/**
 * main - Function
 * @argc: argc
 * @argv: Pointer
 * Return: Nothing.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
