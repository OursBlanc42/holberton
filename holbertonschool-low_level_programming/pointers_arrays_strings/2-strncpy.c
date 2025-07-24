#include <unistd.h>
#include "main.h"

/**
 * _strncpy - Entry point
 * Description: copy a string
 * @dest : string destination
 * @src : string source
 * @n : number of byte to display from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	* Loop until reaching n characters or encountering the
	null character '\0' in src
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/**
	* After copying from src to dest, pad dest with '\0'
	* if src is shorter than n
	*/

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}

