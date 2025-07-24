#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - Entry point : concatenates two strings.
 * Description : allocates memory for an array, using malloc.
 * @nmemb: how many elements
 * @size: size of one elements
 * Return:	pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* declaration and initialization */
	void *ptr = NULL; /* void used to be "generic" */
	unsigned int len_total;
	unsigned int i;
	char *src; /* converted buffer pointer */

	/* check special case */
	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	/* len_total calculation  */
	len_total = nmemb * size;

	/* memory allocation */
	ptr = malloc(len_total);

	if (ptr == NULL) /* check if memory allocation succeed */
	{
		return (NULL);
	}

	/* 'src' points to the same address as 'ptr' but treats it as chars, */
	/* allowing byte-by-byte access for initialization without altering   */
	/* the original void pointer 'ptr' type. */
	src = (char *)ptr;
	for (i = 0 ; i < len_total ; i++)
	{
		src[i] = 0;
	}

	/* Convert into void */
	return (ptr);
}
