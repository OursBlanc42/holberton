#include <unistd.h>
#include "main.h"

/**
 * reset_to_98 - Entry point
 * Description: ptakes a pointer to an int as parameter
 * and updates the value it points to to 98.
 * @n: value to process
 * Return: (*n)
 */

void reset_to_98(int *n)
{
	/* Dereferencing: access to value that the pointer is pointing to */
	*n = 98;
}
