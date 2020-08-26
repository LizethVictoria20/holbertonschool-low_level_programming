#include "search_algos.h"
/**
 * linear_search - Function linear search
 * @array: Array is a pointer to the first element
 * @size: Size is the number of elements in array
 * @value: Value is the value to search for
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, middle = 0, i = 0, right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");

		while (i <= right)
		{
			if (i == right)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
			i++;
		}
		printf("\n");

		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
