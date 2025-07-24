#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * Returns a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 * @s : string to check
 * @c : target character
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{

	/* declare and initialize variable */
	int n = 0;

	/* loop through chain until null charactere ('\0') */
	while (s[n] != '\0')
	{
		/* if the target is found */
		if (s[n] == c)
		{
			/* return adress of first occurence */
			return (&s[n]);
		}
		/* Increment */
		n++;
	}

	/* check if c is empty */
	if (c == '\0')
	{
		/* return adress of first occurence */
		return (&s[n]);
	}

	/* if character is not found */
	return (NULL);

}
