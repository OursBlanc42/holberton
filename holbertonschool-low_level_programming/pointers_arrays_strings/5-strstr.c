#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * Description : locate a substring
 * @haystack : input
 * @needle : target
 * Return: pointer to the begining of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	/* declare and initialize variable */
	int n;
	int m;
	char *ptr = NULL;

	/* special case if needle est empty */
	if (needle[0] == '\0')
	{
		return (haystack);
	}

	/* loop through haystack */
	for (n = 0; (haystack[n] != '\0'); n++)
	{
		/* for each char in haystack , loop in needle */
		for (m = 0; (needle[m] != '\0'); m++)
		{
			/* check each char in needle and compare with haystack */
			if (haystack[n + m] != needle[m])
			{
				break;
			}
		}

		/* if end of needle is reached we have a match*/
		if (needle[m] == '\0')
		{
			ptr = &haystack[n];
			return (ptr);
		}
	}

	return (ptr);
}
