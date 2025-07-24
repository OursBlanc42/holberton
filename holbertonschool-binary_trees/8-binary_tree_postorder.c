#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* @tree: pointer to the tree at the root
* @func: pointer to function
* Return : nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
