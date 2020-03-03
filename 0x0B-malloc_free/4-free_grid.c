#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints 2 dimensional array
 * @grid: Grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
