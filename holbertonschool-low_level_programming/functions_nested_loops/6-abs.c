#include <unistd.h>
#include "main.h"

/**
 * _abs - Entry point
 * Description: Display absolute value of a number
 * @n : number to check
 * Return: absolute value
 */

int _abs(int n)
{
	/* check n sign */
	if (n < 0)
	{
		/* if negative convert to aboslute */
		n = n * -1;
	}

	return (n);
}
