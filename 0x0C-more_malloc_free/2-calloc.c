#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Bytes
 * @size: Size
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *secPtr;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}

	secPtr = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		secPtr[i] = 0;
	}
		return (ptr);
}
