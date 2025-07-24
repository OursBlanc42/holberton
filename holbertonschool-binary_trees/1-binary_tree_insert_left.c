#include <stdlib.h>
#include "binary_trees.h"


/**
* binary_tree_insert_left - inserts a node as the left-child of another node
*
* @parent: is a pointer to the node to insert the left-child in
* @value: is the value to store in the new node
* Return: a pointer to the created node or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	/* Declare and initialize variable */
	binary_tree_t *new_node = NULL;

	/* Check special case */
	if (parent == NULL)
		return (NULL);

	/* Initialize a new node*/
	new_node = malloc(sizeof(binary_tree_t));

	/* Check for memory allocation failure */
	if (new_node == NULL)
		return (NULL);

	/* Fill with data and make the link */
	new_node->n = value;
	new_node->left = NULL;	/* initialize */
	new_node->right = NULL;	/* initialize */

	/* If parent already has a left child */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* Link nodes */
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
