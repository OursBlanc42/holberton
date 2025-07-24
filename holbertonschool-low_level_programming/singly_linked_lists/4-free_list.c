#include <stdlib.h>
#include "lists.h"

/**
* free_list - Free a list_t list
* Description : Algorithm :
* 1 - Loop through each node.
* 2 - Save the actual node in a buffer.
* 3 - Move forward to next node.
* 4 - Free memory of actual node.
*	Free pointer to the node itself
*	Also free memory allocated by strdup previously (strdup allocate memory);
*@head: pointer to a list_t list
*Return: void
*/
void free_list(list_t *head)
{
	/* Initialize a temprorary buffer node*/
	list_t *temp_buffer = NULL;

	/* If the head node is NULL, it's an empty list */
	if (head == NULL)
	{
		return;
	}

	/* Loop through the list until reach the end */
	while (head != NULL)
	{
		/* Store the next node in buffer before deleting */
		temp_buffer = head->next;

		/* Free current node */
		free(head->str);
		free(head);

		/* Switch to next node */
		head = temp_buffer;
	}

}
