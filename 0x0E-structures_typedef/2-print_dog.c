#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prototype about type dog
 * @d: First member
 * Description: Longer description
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nail)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nail)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
