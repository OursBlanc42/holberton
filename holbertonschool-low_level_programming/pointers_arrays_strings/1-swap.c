#include <unistd.h>
#include "main.h"

/**
 * swap_int - Entry point
 * Description: swaps the values of two integers.
 * @a: first integer
 * @b : second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	/* declare & assign temp variable to perform the swap */
	int temp = 0;

	/* Stock temporarly 'a' value */
	temp = *a;
	/* perform swap */
	*a = *b;
	*b = temp;

}
