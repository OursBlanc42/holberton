#include <stdlib.h>
#include "main.h"

/**
 * create_array - allocate and fill array with chars
 * Description : creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of array
 * @c: specific char to initalize array
 * Return: NULL or arr
 */

char *create_array(unsigned int size, char c)
{
	/* declaration and initialization */
	unsigned int i;
	char *arr;

	/* check if size = 0 */
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		/**
		* memory allocation (sizeof(char) = 1 but i keep it for better
		* understanding)
		*/
		arr = malloc(sizeof(char) * size);
	}

	/* check if memory allocation succeed */
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}

	return (arr);
}
