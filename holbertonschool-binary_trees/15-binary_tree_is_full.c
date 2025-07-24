#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* Description :
* Traverse each node and check if node have only one child
* If no child : is a leaf, and it's ok.
* If have two child : is full and it's ok.
*
* @tree: Pointer to the binary tree.
*
* Return: 1 if full or 0 if not (or NULL )
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* declare and initialize variable */
	int left_full;
	int right_full;

	/* Check special case */
	if (tree == NULL)
		return (0);

	/* If the node is a leaf, it's valid */
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	/* If the node have exactly one child : is not empty  */
	/* ^ is the XOR operator (=true if exactly one of the operand is true) */
	if ((tree->left == NULL) ^ (tree->right == NULL))
		return (0);

	/* Recursively check left and right subtrees */
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	/* Return whether both subtrees are full */
	if ((left_full == 1) && (right_full == 1))
		return (1);
	else
		return (0);

}
