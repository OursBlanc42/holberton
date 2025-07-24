#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_delete - deletes an entire binary tree
* Description : recursively traverse the tree and free each node
* @tree: is a pointer to root node
* Return: NULL if tree is empty
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/* If we reach NULL it's the end */
	if (tree == NULL)
	{
		return;
	}

	/* recursively catch each node */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* free the node */
	free(tree);
}
