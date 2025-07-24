#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - return index of the first element for which the cmp
 * function does not return 0
 * @array: a pointer to the function you need to use
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* declare and initialize var */
	int i;

	/* check special case */
	if ((size <= 0) || (array == NULL)  || (cmp == NULL))
	{
		return (-1);
	}

	/* loop through array and execute the action for each item */
	for (i = 0; i < size ; i++)
	{	/* check if the return value is a 1 (match) or 0 (no match) */
		/* if a match, we found the first index and we can display it */
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	/* return -1 if no element matches */
	return (-1);

}
