#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_dlistint - Free a list_t list
* Description : Algorithm :
* 1 - Loop through each node.
* 2 - Save the actual node in a buffer.
* 3 - Move forward to next node.
* 4 - Free memory of actual/buffer node.
*@head: pointer to a list_t list
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
	/* declare and initialize */
	dlistint_t *temp_buffer = NULL;

	/* If the head node is NULL, it's an empty list */
	if (head == NULL)
	{
		return;
	}
	/* Else, loop through each node and free them */
	else
	{
		while (head->next != NULL)
		{
			temp_buffer = head;	/* temporary backup before free */
			head = head->next;
			free(temp_buffer);
		}
		/* Free the last one when head-> == NULL */
		free(head);
	}

}
