#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Function that creates an array of integers
 * @min: Number min
 * @max: Number max
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *arr, arr2, num, i;

	if (min > max)
	{
		return (NULL);
	}
	arr2 = max - min + 1;
	arr = malloc(sizeof(int) * arr2);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (num = min, i = 0; num <= max && i < arr2; num++, i++)
	{
		arr[i] = num;
	}
	return (arr);
}
