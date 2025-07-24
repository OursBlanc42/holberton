#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * Description : allocates memory using malloc.
 * @b: bytes allocated
 * Return:	pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	/* declaration and initialization */
	unsigned int *ptr;

	/* check if b = 0 */
	if (b == 0)
		exit(98); /* exit programm (and not return function)*/

	/* Allocate memory of "b" bytes */
	ptr = malloc(b);

	/* check if memory allocation succeed */
	if (ptr == NULL)
		exit(98); /* exit programm (and not return function)*/

	return (ptr);

}
