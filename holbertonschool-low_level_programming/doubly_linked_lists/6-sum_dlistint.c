#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* sum_dlistint - returns the sum of all the data (n)
* of a dlistint_t linked list.
* @head: pointer to a list_t list
* Return: the nth node of a dlistint_t linked list or
* 0 is list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	/* Declare and initialize variable*/
	int sum_all = 0;

	/* Check special case */
	/* If the list is empty, return 0*/
	if (head == NULL)
		return (0);

	/* Loop through the linked list */
	while (head != NULL)
	{
		sum_all = sum_all + head->n;
		head = head->next;
	}

	/* Nothing was found, return NULL */
	return (sum_all);
}
