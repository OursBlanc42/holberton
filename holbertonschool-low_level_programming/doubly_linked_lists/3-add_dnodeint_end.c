#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* add_dnodeint_end - Add a new node at the end of a list
* @head: double pointer to a list_t list
* @n: data to be added (int)
* Return: the adress of new elements or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Initialize a new node and buffer*/
	dlistint_t *temp_buffer = NULL;
	dlistint_t *new_node = malloc(sizeof(*new_node));

	/* Check memory allocation failure */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign data to the new node */
	/* next can be "NULL" cause will be the last node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set new_node as the head */
	if (*head == NULL)
		*head = new_node;

	/* Otherwise, loop through the list and find the last node */
	else
	{
		temp_buffer = *head;
		while (temp_buffer->next != NULL)
		{
			temp_buffer = temp_buffer->next;
		}
		/* Attach the new node at the end of the list */
		temp_buffer->next = new_node;
	}

	/* Link the new node with the previous one */
	new_node->prev = temp_buffer;

	return (new_node);
}
