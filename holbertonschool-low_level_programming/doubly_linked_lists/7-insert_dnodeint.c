#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* dlistint_len - Calculate the length of a linked list
* @h: pointer to list_t list
* Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
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

/**
* insert_after_node - subfonction who insert a node after another one
* @h: pointer to head
* @idx: index of the list where the new node should be added. Index start 0
* @n: data to be added (int)
* Return: the number of elements
*/
dlistint_t *insert_after_node(dlistint_t *h, unsigned int idx, int n)
{
	/* Declare and initialize variables */
	unsigned int current_index = 0;
	dlistint_t *node = NULL;
	dlistint_t *temp_buffer = NULL;

	temp_buffer = h;

	/* Loop through the chain until finde node before index */
	while (temp_buffer != NULL)
	{
		if (current_index == (idx - 1))
		{
			/* Initialize a new node*/
			node = malloc(sizeof(*node));

			/* Check memory allocation failure */
			if (node == NULL)
				return (NULL);

			/* write data */
			node->n = n;
			/* Set the prev of new node to current_node */
			node->prev = (temp_buffer);
			/* Set the next of new node */
			node->next = (temp_buffer)->next;
			/* update link with next node to new node */
			node->next->prev = node;
			/* update the link with previous node to new node */
			(temp_buffer)->next = node;

			return (node);
		}

		temp_buffer = temp_buffer->next;
		current_index++;
	}

	/* If we reach this point, that mean we have a problem and return NULL */
	return (NULL);
}


/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: double pointer to the head of the double linked chain
* @idx: index of the list where the new node should be added. Index start 0
* @n: data to be added (int)
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* Declare and initialize variables */
	unsigned int list_len = 0;
	dlistint_t *new_node = NULL;

	/* Calculate len of the list */
	list_len = dlistint_len(*h);

	/* Check special case */
	/* If list is empty, the only right index is zero */
	if ((*h == NULL) && (idx != 0))
	{
		return (NULL);
	}

	/* idx should be in the appropriate range */
	if (idx <= (list_len))
	{
		/* If == 0 : add node at the begining of the list */
		if (idx == 0)
			new_node = add_dnodeint(h, n);

		/* If idx == (list_len) : add node at the end of the list */
		else if (idx == list_len)
			new_node = add_dnodeint_end(h, n);

		/* Otherwise add node at the idx position with subfunction */
		else
			new_node = insert_after_node(*h, idx, n);

		/* Once subfunction call, check the return code */
		if (new_node == NULL)
		{
			return (NULL);
		}
		else
			return (new_node);
	}

	return (NULL);

}
