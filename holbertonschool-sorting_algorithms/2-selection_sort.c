#include <stddef.h>
#include "sort.h"
#include <stdio.h>

/**
* selection_sort - sorts an array of integers in ascending order using the
* selection_sort algorithm
* @array: input array of int
* @size: size of the array
* Return: Always 0
*/

void selection_sort(int *array, size_t size)
{
	/* declare and initialize variable */
	int mini, index, index_mini, buffer, play_again, cursor, swapped;

	for (index = 0; index < (int)size; index++)	/* For each value */
	{
		play_again = 0;			/* reset checker */
		swapped = 0;			/* reset swapped state */
		index_mini = index;		/* suppose first digit at minimum */
		mini =  array[index];	/* Set mini to first element */

		/* Search minimum element in the list */
		for (cursor = (index + 1) ; cursor < (int)size; cursor++)
		{
			if (array[cursor] < mini)
			{
				mini = array[cursor];
				index_mini = cursor;
				swapped = 1;
			}
		}

		if (swapped == 1)	/* Swap value if necessary and print result */
		{
			buffer = array[index];
			array[index] = array[index_mini];
			array[index_mini] = buffer;
			print_array((const int *)array, size);
		}

		/* check if the list is in right order to avoid useless traverse */
		for (cursor = (index + 1) ; cursor < (int)size; cursor++)
		{
			if (array[cursor - 1] > array[cursor])
				play_again = 1;
		}

		if (play_again == 0)	/* if necessary stop it, otherwise play again*/
			return;
	}
}
