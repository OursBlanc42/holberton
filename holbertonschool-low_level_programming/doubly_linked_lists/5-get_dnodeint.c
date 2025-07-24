#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: pointer to a dlistint_t list
* @index: index of the node starting from 0
* Return: the nth node of a dlistint_t linked list or
* NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Declare and initialize variable*/
	unsigned int nb_node = 0;

	/* Loop through the linked list */
	while (head != NULL)
	{
		/* Check if we reach the right index */
		if (nb_node == index)
		{
			return (head);
		}

		nb_node++;
		head = head->next;
	}

	/* Nothing was found, return NULL */
	return (NULL);
}
