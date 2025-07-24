#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * Description : The array created should contain all the values from
 * min (included) to max (included), ordered from min to max
 * @min: start of the array
 * @max: end of the array
 * Return:	pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	/* declare variable */
	int len_total;
	int *ptr;
	int i;

	/* check special case */
	if (min > max)
	{
		return (NULL);
	}

	/**
	* Calculate total memory needed:
	* +1 to include 'max' in the range from 'min' to 'max'
	* multiply by sizeof(int) to get the total byte size needed
	*/
	len_total = (max - min + 1);

	ptr = malloc(len_total * sizeof(int)); /* memory allocation */

	if (ptr == NULL) /* check if memory allocation succeed */
	{
		return (NULL);
	}

	/* loop through the array */
	for (i = 0 ; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
