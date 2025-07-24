#include <unistd.h>
#include "main.h"

/**
 * _strcat - Entry point
 * Description: concatenate two string
 * @dest : string destination
 * @src : string source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	/* declare and define variable */
	int src_len = 0;
	int dest_len = 0;
	int i;
	int j = 0;
	int max;

	/* loop through source chain until null charactere ('\0') */
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	/* loop through dest chain until null charactere ('\0') */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	max = dest_len + src_len;
	for (i = dest_len; i <= max ; i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);

}

