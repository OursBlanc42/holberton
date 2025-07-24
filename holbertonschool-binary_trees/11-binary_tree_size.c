#include <stdlib.h>
#include "binary_trees.h"

/**
* count_node - count number of node in a tree
* @node: is a pointer to a node of the tree
* @counter: incremential value to count each node
* Return: NULL if tree is empty or size of tree
*/
void count_node(const binary_tree_t *node, size_t *counter)
{
	/* If we reach NULL it's the end */
	if (node == NULL)
	{
		return;
	}

	/* Increment counter */
	(*counter)++;

	/* recursively catch each node */
	count_node(node->left, counter);
	count_node(node->right, counter);

}

/**
* binary_tree_size - measures the size of a binary tree
* @tree: is a pointer to the root node of the tree to measure the size
* Return: NULL if tree is empty or size of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* declare and initialize */
	size_t counter = 0;

	/* Check special case */
	if (tree == NULL)
	{
		return (0);
	}

	/* call recursive function */
	count_node(tree, &counter);

	return (counter);
}
