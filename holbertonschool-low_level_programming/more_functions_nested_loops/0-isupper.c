#include <unistd.h>
#include "main.h"

/**
 * _isupper - Entry point
 * Description:  Check for uppercase character
 * @c: Character to check
 * Return: 1 if c is uppercase & 0 otherwise
 */

int _isupper(int c)
{
	/* check the range in ASCII table */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
