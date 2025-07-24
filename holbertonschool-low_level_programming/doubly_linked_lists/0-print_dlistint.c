#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: pointer to list_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* Declare and initialize variable*/
	unsigned long int nb_node = 0;

	/* Loop through the linked list */
	while (h != NULL)
	{
		nb_node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nb_node);
}
