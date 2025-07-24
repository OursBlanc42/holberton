#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate the length of a string
 * Description : calculate the length of a string (without '\0')
 * @str: source str
 * Return: length
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
 * _strdup - Entry point : return a pointer on a duplicate string
 * Description : returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: source str
 * Return: NULL (if malloc failed) or pointer to duplicate string
 */

char *_strdup(char *str)
{
	/* declaration and initialization */
	unsigned int i;
	unsigned int len;
	char *arr;

	/* check if size = 0 */
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		/* find string length ( +1 to count '\0' ) */
		len = _strlen(str) + 1;
	}

	/* memory allocation */
	arr = malloc(len);

	/* check if memory allocation succeed */
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{	/* duplicate strings */
		for (i = 0; i < len; i++)
		{
			arr[i] = str[i];
		}
	}

	return (arr);
}

