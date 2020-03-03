#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints 2 dimensional array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		s[i][i] = 0;
	}
	return (s);
}
