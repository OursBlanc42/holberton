#include <unistd.h>
#include "main.h"

/**
 * _strcpy - Entry point
 * Description: copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest : buffer
 * @src : source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	/* declare variable */
	int i;
	int end = 0;

	/* loop through source chain until null charactere ('\0') */
	while (src[end] != '\0')
	{
		/* increment end for each character founded */
		end++;
	}

	for (i = 0 ; i < end && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* add null character */
	dest[i] = '\0';

	return (dest);

}

