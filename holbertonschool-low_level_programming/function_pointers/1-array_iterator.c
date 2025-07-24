#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: a pointer to the function you need to use
 * @size: size of the array
 * @action: callback
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declare and initialize var */
	/* unsigned long int to fit with size_t */
	unsigned long int i;

	/* loop through array and execute the action for each item */
	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
