#include "main.h"

/**
 * _memset - Entry point
 * Description: fills memory with a constant byte.
 * @s : memory area
 * @b : constant byte
 * @n : fills the first n bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* declare and initialize variable */
	unsigned int i = 0;

	/* loop through adress and write b */
	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}

