#include <unistd.h>
#include "main.h"

/**
 * _strlen - Entry point
 * Description: returns the length of a string
 * @s : string to check
 * Return: length of a string
 */

int _strlen(char *s)
{
	/* declare and initialize variable */
	int n = 0;

	/* loop through chain until null charactere ('\0') */
	while (s[n] != '\0')
	{
		/* increment n for each character founded */
		n++;
	}

	return (n);

}
