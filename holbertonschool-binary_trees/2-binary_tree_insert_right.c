#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right child
 * @value: value to stock in the node.
 * Return: binary tree, or NULL if it's failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Declare and initialize variable */
	binary_tree_t *newnode;

	/* Check special case */
	if (parent == NULL)
		return (NULL);

	/* Initialize a new node*/
	newnode = malloc(sizeof(binary_tree_t));

	/* Check for memory allocation failure */
	if (newnode == NULL)
		return (NULL);

	/* Fill with data and make the link */
	newnode->n = value;
	newnode->left = NULL;	/* initialize */
	newnode->right = NULL;	/* initialize */

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}

	/* link the node */
	parent->right = newnode;
	newnode->parent = parent;

return (newnode);
}
