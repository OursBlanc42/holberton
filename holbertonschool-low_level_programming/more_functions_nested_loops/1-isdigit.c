#include <unistd.h>
#include "main.h"

/**
 * _isdigit - Entry point
 * Description:  Check for a digit (0 to 9)
 * @c: Character to check
 * Return: 1 if c is digit & 0 otherwise
 */

int _isdigit(int c)
{
	/* check the range in ASCII table */
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
