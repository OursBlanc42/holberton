#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - Calculate the length of a string
* @str: string to check
* Return: length of a string
*/
int _strlen(char *str)
{
	/* declare and initialize variable */
	int len = 0;

	/* loop through chain until null charactere ('\0') */
	while (str[len] != '\0')
	{
		/* increment n for each character founded */
		len++;
	}

	return (len);

}

/**
* add_node - Add a new node at the beginning of a list
* @head: double pointer to a list_t list
* @str: string wrote in the new node
* Return: the adress of new elements or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	/* Declare and initialize variables */
	char *dup_str = NULL;

	/* Initialize a new node*/
	list_t *new_node = malloc(sizeof(list_t));

	/* Check for special cases: invalid input or memory allocation failure */
	if ((str == NULL) || (new_node == NULL))
	{
		free(new_node);
		return (NULL);
	}

	/* Duplicate str to manipulate it & check if duplication succeed */
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Fill with data from "previous" node, calculate len */
	/* and insert element at the begining of the list */
	new_node->str = dup_str;
	new_node->len = _strlen(dup_str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
