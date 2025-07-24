#include "binary_trees.h"
/**
 * binary_tree_leaves - Count leaves in a binary tree.
 * @tree: Pointer to the binary tree.
 *
 * Return: number of leaves, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter;
	 counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		counter++;

	counter = counter + binary_tree_leaves(tree->left);
	counter = counter + binary_tree_leaves(tree->right);

	return (counter);
}
