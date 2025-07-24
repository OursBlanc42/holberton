#include <unistd.h>
#include "main.h"

/**
 * _islower - Entry point
 * Description: Check for lowercase character.
 * @c : number to check
 * Return: 0 default / 1 if c is lowercase
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}

	return (0);


}
