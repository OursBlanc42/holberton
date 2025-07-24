#include "main.h"

/**
 * _strspn - Entry point
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s : string to check
 * @accept : target character
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	/* declare and initialize variable */
	int counter = 0;
	int n = 0;
	int m;
	int check = 0; /* 0 = wrong & 1 = true */

	/* loop through characters in s until null charactere ('\0') */
	while (s[n] != '\0')
	{
		/* initialize m for loop */
		m = 0;

		/* loop through and compare with accepted character*/
		while (accept[m] != '\0' && check == 0)
		{
			if (s[n] == accept[m])
			{
				check = 1;
				counter++;
				break;
			}
			m++;
		}

		/* If no match was found, break the loop */
		if (check == 0)
		{
			break;
		}

		/* Increment */
		check = 0;

		/* Increment */
		n++;
	}

	return (counter);
}
