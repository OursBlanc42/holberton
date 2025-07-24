#include <unistd.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Description: Check if is a letter (lower case or uppercase).
 * @c : character to check
 * Return: 0 default / 1 if c is letter (lower or uppercase)
 */

int _isalpha(int c)
{
	/* check if C is between the right range is ASCII table */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}

	return (0);


}
