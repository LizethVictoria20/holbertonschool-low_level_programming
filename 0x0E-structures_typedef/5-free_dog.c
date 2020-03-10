#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *free_dog - function to free memory
 * @d: type
 * Return: Always success
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
