#include "main.h"

/**
 * _memcpy - Entry point
 * Description: copies n bytes from memory area src to memory area dest
 * @src : source
 * @dest : destination
 * @n : number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* declare and initialize variable */
	unsigned int i = 0;

	/* loop through adress and copy from src to dest */
	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

