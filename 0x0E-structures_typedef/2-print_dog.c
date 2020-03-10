#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Prototype about type dog
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: 3 member
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
		printf("Name: (nail)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nail)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
