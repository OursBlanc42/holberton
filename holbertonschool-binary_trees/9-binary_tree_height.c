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