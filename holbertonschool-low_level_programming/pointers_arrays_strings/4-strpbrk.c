#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry point
 * search a string for any of a set of bytes.
 * @s : string to check
 * @accept : target character
 * Return: pointer to the first character matched
 */

char *_strpbrk(char *s, char *accept)
{

	/* declare and initialize variable */
	int n = 0;
	int m;
	char *ptr = NULL;

	/* loop through characters in s until null charactere ('\0') */
	while (s[n] != '\0')
	{
		/* initialize m for loop */
		m = 0;

		/* loop through and compare with accepted character*/
		while (accept[m] != '\0')
		{
			if (s[n] == accept[m])
			{
				ptr = &s[n];
				break;
			}
			m++;
		}

		/* check if it's a match */
		if (ptr != NULL)
		{
			break;
		}

		/* Increment */
		n++;
	}

	return (ptr);
}
