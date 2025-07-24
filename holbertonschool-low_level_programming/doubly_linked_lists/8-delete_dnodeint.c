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
* del_dnodeint_end - deletes the last node in a list
* @head: double pointer to dlistint_t list
* Return: 1 (success)
*/
int del_dnodeint_end(dlistint_t **head)
{
	/* declare and initialize */
	dlistint_t *temp_buffer = NULL;

	temp_buffer = (*head);	/* temporary backup before free */

	/* Loop through list until last node */
	while (temp_buffer->next != NULL)
	{
		temp_buffer = temp_buffer->next;
	}

	/* if there is more than one element on the list */
	if (temp_buffer->prev != NULL)
	{
		/* Redefine the end of the list (node n-1 -> next to NULL )*/
		temp_buffer->prev->next = NULL;
	}
	/* If only one node, and set *head to NULL */
	else
	{
		(*head) = NULL;
	}

	free(temp_buffer);

	return (1);
}

/**
* del_dnodeint_begin- deletes the first node on a list
* @head: double pointer to dlistint_t list
* Return: 1 (success)
*/
int del_dnodeint_begin(dlistint_t **head)
{
	/* declare and initialize */
	dlistint_t *temp_buffer = NULL;

	temp_buffer = (*head);	/* temporary backup before free */

	/* if there is more than one element on the list */
	if (temp_buffer->next != NULL)
	{
		/* Redefine the begin of the list (node n+1 -> prev to NULL )*/
		temp_buffer->next->prev = NULL;
		(*head) = temp_buffer->next;
	}
	/* If only one node, set *head to NULL */
	else
	{
		(*head) = NULL;
	}

	free(temp_buffer);

	return (1);
}

/**
* del_dnodeint_index- deletes the index node in a list
* @head: double pointer to dlistint_t list
* @index: index of the node to delete
* Return: 1 if success -1 if failure
*/
int del_dnodeint_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_buffer = NULL;
	unsigned int current_index = 0;

	temp_buffer = (*head);

	/* Loop through the list to find the node at the given index */
	while (temp_buffer != NULL)
	{
		if (current_index == index)
		{
			/* link node n-1 and n+1 to bypass the node */
			temp_buffer->prev->next = temp_buffer->next;
			temp_buffer->next->prev = temp_buffer->prev;

			free(temp_buffer);
			return (1);
		}
		temp_buffer = temp_buffer->next;
		current_index++;
	}

	return (-1); /* Index out of range */
}


/**
* delete_dnodeint_at_index - deletes the node at index of a
* dlistint_t linked list. index start at 0.
* @head: double pointer to the head of the double linked chain
* @index: index of the list where the node should be delete
* Return: 1 if success / -1 if failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* Declare and initialize variables */
	unsigned int list_len = 0;

	/* Calculate len of the list */
	list_len = dlistint_len(*head);

	/* Check special case */
	/* If list is empty, empty list nothing to free */
	if ((*head) == NULL)
	{
		return (-1);
	}

	/* index should be in the right range (- 1 because index start at 0 ) */
	if (index <= (list_len - 1))
	{
		/* If == 0 : delete node at the begining of the list */
		if (index == 0)
			return (del_dnodeint_begin(head));

		/* If index == (list_len) : delete node at the end of the list */
		else if (index == (list_len - 1))
			return (del_dnodeint_end(head));

		/* otherwise delete node at the index of the list */
		else
		{
			return (del_dnodeint_index(head, index));
		}
	}

	return (-1);

}
