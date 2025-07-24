#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate the length of a string
 * Description : calculate the length of a string (without '\0')
 * @str: source str
 * Return: unsigned int "count" = length of a string
 */

unsigned int _strlen(char *str)
{
	/* declare an initialize */
	unsigned int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * string_nconcat - Entry point : concatenates two strings.
 * Description : The returned pointer shall point to a newly allocated space
 * in memory, which contains s1, followed by the first n bytes of s2,
 * and null terminated
 * @s1: string 1
 * @s2: string 2
 * @n: n first bytes from string 2
 * Return:	pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declaration and initialization */
	char *ptr;
	unsigned int i, len_s1, len_s2, len_total;

	if (s1 == NULL)		/* check special case */
		s1 = "";

	if (s2 == NULL)		/* check special case */
		s2 = "";

	len_s1 = _strlen(s1);	/* retrieve strings 1 length */
	len_s2 = _strlen(s2);	/* retrieve strings 2 length */

	if (n >= len_s2)	/* Use entire s2 if n is >= length of s2 */
		n = len_s2;

	/* len_total calculation + 1 to count the FINAL '\0' */
	len_total = len_s1 + n + 1;

	ptr = malloc(len_total);	/* memory allocation */

	if (ptr == NULL) /* check if memory allocation succeed */
	{
		return (NULL);
	}
	else
	{	/* concatenate strings */
		for (i = 0; i < len_s1; i++)	/* first string */
		{
			ptr[i] = s1[i];
		} /* second string (<= to count the FINAL \0 )*/
		for (i = 0; i < n; i++)
		{
			ptr[len_s1 + i] = s2[i];
		}
		ptr[len_total - 1] = '\0';	/* Add the final '\0' */
	}

	return (ptr);
}
