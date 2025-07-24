#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
* @tree: pointer to the tree at the root
* @func: pointer to function
* Return : nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

 /* appel de la fonction avec la valeur actuel */
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
