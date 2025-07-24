#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - Calculate the length of a linked list
 *@h: pointer to list_t list
 *Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	/* Declare and initialize variable*/
	unsigned long int nb_node = 0;

	/* Loop through the linked list */
	while (h != NULL)
	{
		nb_node++;
		h = h->next;
	}

	return (nb_node);
}
