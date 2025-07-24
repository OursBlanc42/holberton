#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 *@h: pointer to list_t list
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	/* Declare and initialize variable*/
	unsigned long int nb_node = 0;

	/* Loop through the linked list */
	while (h != NULL)
	{
		/* Check special case if string is NULL */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		/* Display structure data */
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		nb_node++;
		h = h->next;
	}

	return (nb_node);
}
