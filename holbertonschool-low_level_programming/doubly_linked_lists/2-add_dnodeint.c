#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* add_dnodeint - Add a new node at the beginning of a list
* @head: double pointer to a list_t list
* @n: data to be added (int)
* Return: the adress of new elements or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Initialize a new node*/
	dlistint_t *new_node = malloc(sizeof(*new_node));

	/* Check memory allocation failure */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Fill with new data */
	new_node->n = n;

	/* Assign previous as NULL (cause will be the first one)*/
	new_node->prev = NULL;

	/* If list is not empty Link the node N to node N+1 */
	if (*head != NULL)
	{
	new_node->next = *head;
	}
	else
	{
		new_node->next = NULL;
	}

	/* If list is not empty Link the node N+1 to N */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* New begining of the list */
	*head = new_node;

	return (new_node);
}
