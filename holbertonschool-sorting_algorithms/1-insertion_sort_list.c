#include <stddef.h>
#include "sort.h"
/**
* insertion_sort_list - sorts a doubly linked list
* of integers in ascending order
* @list: the head of the doubly linked list
*
* Return: nothing
*/

void insertion_sort_list(listint_t **list)
{
listint_t *index, *preceding;

if (*list == NULL)
	return;

/* Start with the second element of the list */
index = (*list)->next;

/* Go trough the list */
while (index != NULL)
{
	/* Define the preceding element */
	preceding = index->prev;

	while (preceding != NULL && index->n < preceding->n)
		{
		/* Swap the nodes */
		preceding->next = index->next;

		if (index->next != NULL)
			index->next->prev = preceding;

		index->prev = preceding->prev;

		if (preceding->prev != NULL)
			preceding->prev->next = index;

		else
			*list = index;

		index->next = preceding;
		preceding->prev = index;
		print_list(*list);
		preceding = index->prev;
		}
	index = index->next;
}
}
