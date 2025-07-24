#include <stddef.h>
#include "sort.h"
#include <stdio.h>

/**
* recursive_quicksort - Recursively sorts array of integer
* by swap value arount a pivot (quick sort)
* @array: array to sort witch quick sort algorithm
* @bot: low index of the partition
* @top: high index of the partiion
* @size: size of the array
* Return: nothing
*/
void recursive_quicksort(int *array, int bot, int top, size_t size)
{
	/* declare and initialize variable */
	int value_pivot = array[top];
	int bot_marker = bot - 1;
	int top_marker = bot;
	int stock;

	while (top_marker < top)	/* loop until reach the top of the list */
	{
		/* check if current value is less than pivot value*/
		if (array[top_marker] < value_pivot)
		{
			bot_marker++; /* Move the lower marker forward */

			if (array[top_marker] != array[bot_marker])	/* Check if swap */
			{
				stock = array[top_marker];	/* Swap value */
				array[top_marker] = array[bot_marker];
				array[bot_marker] = stock;
				print_array(array, size);	/* Only print if the pivot moved */
			}
		}
		top_marker++;	/* Move the top marker forward */
	}

	bot_marker++;	/* Place the pivot after the last smaller element */
	if (array[bot_marker] != array[top]) /* Check if the pivot have moved */
	{
		stock = array[bot_marker]; /* swap value */
		array[bot_marker] = array[top];
		array[top] = stock;
		print_array(array, size);	/* Only print if the pivot moved */
	}

	/* Recursive calls for left and right partition */
	if (bot < bot_marker - 1) /* Only recurse if the left partition is valid */
		recursive_quicksort(array, bot, bot_marker - 1, size);

	if (bot_marker + 1 < top) /* Only recurse if the right partition is valid */
		recursive_quicksort(array, bot_marker + 1, top, size);
}


/**
* quick_sort - Entry point :
* by using algorithm quick sort
* @array: array to sort witch quick sort algorithm
* @size: size of the array
* Return: nothing
*/
void quick_sort(int *array, size_t size)
{
	/* Check special case*/
	if (array == NULL)
		return;

	/* if there is one value in the array, nothing to sort*/
	if (size < 2)
		return;

	/* call quick_algo for the first time  */
	/* quickalgo(array, begin, end, size ) */
	recursive_quicksort(array, 0, size - 1, size);
}


