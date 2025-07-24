#include <stdio.h>
#include "dog.h"

/**
 * print_dog - initialize a variable of type struct dog
 * Description :  initialize a variable of type struct dog
 * @d: pointer to the structure dog
 * Return:	/
 */

void print_dog(struct dog *d)
{
	/* Check special case */
	if (d == NULL)
	{
		return;
	}

	/* Display Name or Nil if name == NULL */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* Display Age (not a pointer so cant be == NUL) */
	printf("Age: %f\n", d->age);

	/* Display Name or Nil if owner == NULL */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
