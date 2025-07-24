#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function which creates a binary tree
 * @parent: pointer on the root of the binary tree
 * @value: value to stock in the node.
 * Return: binary tree, or NULL if it's failed.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
