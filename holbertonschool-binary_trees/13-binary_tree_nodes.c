#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_leaves - Count leaves in a binary tree.
* @tree: Pointer to the binary tree.
*
* Return: number of leaves, or 0 if tree is NULL.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_counter;

	leave_counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leave_counter++;

	leave_counter = leave_counter + binary_tree_leaves(tree->left);
	leave_counter = leave_counter + binary_tree_leaves(tree->right);

	return (leave_counter);
}


/**
* count_node - count number of node in a tree
* @node: is a pointer to a node of the tree
* @node_counter: incremential value to count each node
* Return: NULL if tree is empty or size of tree
*/
void count_node(const binary_tree_t *node, size_t *node_counter)
{
	/* If we reach NULL it's the end */
	if (node == NULL)
	{
		return;
	}

	/* Increment counter */
	(*node_counter)++;

	/* recursively catch each node */
	count_node(node->left, node_counter);
	count_node(node->right, node_counter);

}

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* Description :
* number of non-leaves nodes = total number of nodes - number of leaves
* @tree: Pointer to the binary tree.
*
* Return: number of non-leave node, or 0 if tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* declare and initialize */
	size_t nb_leave = 0;
	size_t nb_node = 0;
	size_t nb_non_leave = 0;

	count_node(tree, &nb_node);

	nb_leave = binary_tree_leaves(tree);

	nb_non_leave = nb_node - nb_leave;

	return (nb_non_leave);
}
