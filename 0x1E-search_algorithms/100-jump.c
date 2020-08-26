#include "search_algos.h"
/**
 * jump_search - Function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: Array is a pointer to the first element
 * @size: Size is the number of elements in array
 * @value: Value is the value to search for
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = sqrt(size), i = 0;

	if (array == NULL)
		return (-1);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int) start, array[start]);
		start = end;
		end += sqrt(size);
	}
	printf("Value checked array[%d] = [%d]\n", (int) start, array[start]);
	printf("Value found between indexes [%d] and [%d]\n",
		(int) start, (int) end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
