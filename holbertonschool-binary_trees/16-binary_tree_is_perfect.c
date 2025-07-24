#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* Description: Call the subfunction "calculate_height" to retrieve height
* and substract 1 (cause height start at 0 in exemple )
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: height of the node or 0 if tree is NULL or 1 leave
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* declare and initialize variable */
	size_t left_height = 0;
	size_t right_height = 0;

	/* Check special case */
	if (tree == NULL)
	{
		return (0);
	}

	/* check special case when only one node height = 0;*/
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);

	/* recursive call on each branch (left & right )*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Find the max "len" between left and right subbranche */
	if (left_height >= right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}

}
/**
* binary_tree_is_perfect - verify if a binary tree is perfect
* @tree: pointer to the binary tree
* Return: 1 if its perfect, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect;
	int right_perfect;

	if (tree == NULL)
		return (0);

 /* if tree directly contains a leaf, it is perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

/* If a sub-tree is missing, it is not perfect */
		if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_perfect = binary_tree_height(tree->left);
	right_perfect = binary_tree_height(tree->right);

/* Checks if sub-tree are equal*/
	if (left_perfect == right_perfect && binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right))
		return (1);

	else
		return (0);
}
