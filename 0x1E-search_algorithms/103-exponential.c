#include "search_algos.h"
/**
 * binary_search_rec - Function linear search
 * @array: Array is a pointer to the first element
 * @left: Position left
 * @value: Value is the value to search for
 * @right: Position right
 * Return: Always EXIT_SUCCESS
 */

int binary_search_rec(int *array, int value, size_t left, size_t right)
{
	size_t middle = 0, i = 0;

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
			left = middle + 1;
		else if (array[middle] > value)
		{
			if (middle == 0)
				right = 0;
			else
				right = middle - 1;
		}
		else
			return (middle);
	}
	return (-1);
}

/**
 * exponential_search - Function linear search
 * @array: Array is a pointer to the first element
 * @size: Size is the number of elements in array
 * @value: Value is the value to search for
 * Return: Always EXIT_SUCCESS
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bount = 1, min = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (bount < size && array[bount] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int) bount, array[bount]);
		bount *= 2;
	}
	if (bount > size)
		min = size - 1;
	else if (bount < size)
		min = bount;
	else
		min = size - 1;

	printf("Value found between indexes [%d] and [%d]\n",
		(int) bount / 2, (int) min);
	return (binary_search_rec(array, value, bount / 2, min));
}
