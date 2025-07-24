#include <unistd.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * Description: reverse the ocntent of an array of integers
 * @a : array to reverse
 * @n : number of element in the array
 * Return: /
 */

void reverse_array(int *a, int n)
{
	/* declare and initialize variable */
	int i;
	int tmp;
	int j = (n - 1);	/* adjust n */

	/* reverse loop (until half of the chain) */
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[j];		/* save in buffer */
		a[j] = a[i];	/* swap int */
		a[i] = tmp;		/* swap int */

		j--;			/* decrement */
	}

}

