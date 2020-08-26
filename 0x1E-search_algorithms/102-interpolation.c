#include "search_algos.h"
/**
 * interpolation_search - Function interpolation_search
 * @array: Array is a pointer to the first element
 * @size: Size is the number of elements in array
 * @value: Value is the value to search for
 * Return: Always EXIT_SUCCESS
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int) size - 1;


	if (array == NULL)
	{
		return (-1);
	}
	while ((array[high] != array[low]) && (value >= array[low]) &&
		(value <= array[high]))
	{
		size_t middle = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int) middle, array[middle]);

		if (array[middle] < value)
			low = middle + 1;
		else if (value < array[middle])
			high = middle - 1;
		else
			return (middle);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
