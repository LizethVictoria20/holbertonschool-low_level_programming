#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Prototype about type dog
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: 3 member
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
