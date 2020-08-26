#include "search_algos.h"
/**
 * linear_search - Function linear search
 * @array: Array is a pointer to the first element
 * @size: Size is the number of elements in array
 * @value: Value is the value to search for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int temp = -1;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (temp);
}
