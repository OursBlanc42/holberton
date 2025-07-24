#include <stddef.h>
#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order using the
* Bubble sort algorithm
* @array: input array of int
* @size: size of the array
* Return: Always 0
*/

void bubble_sort(int *array, size_t size)
{
	int index = 1;
	int buffer = 0;
	int swapped = 1;

	while (swapped == 1)
	{
		swapped = 0;	/* reset swapped state */

		/* traverse array */
		while (index < (int)size)
		{
			/* compare and swap if necessary */
			if (array[index - 1] > array[index])
			{
				buffer = array[index];
				array[index] = array[index - 1];
				array[index - 1] = buffer;
				swapped = 1;

				print_array((const int *)array, size);
			}
			index++;
		}

		/* reinitialize index */
		index = 0;
	}

}
