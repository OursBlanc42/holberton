#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * Description :  initialize a variable of type struct dog
 * @d: structure
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
 * Return:	/
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* check if d is a valid pointer */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
