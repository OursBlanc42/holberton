#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free (memory) dogs
 * Description :  free memory use by dogs structures
 * @d: structure dog
 * Return:	/
 */

void free_dog(dog_t *d)
{
	/* check special case */
	if (d != NULL)
	{
		/* free name and owner */
		/* because they are dynamically memory allocated */
		free(d->name);
		free(d->owner);
	}

	/* free pointer himself */
	free(d);
}
