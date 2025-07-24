#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node.
* Description:
* A sibling is the other child of the same parent node
* Climb up to parent node, check if we provide from left or right child
*
* @node: Pointer to the node to find the sibling of.
*
* Return: Pointer to the sibling node,
*	NULL if node is NULL, parent is NULL, or no sibling exists.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	/* check special case */
	if ((node == NULL) || (node->parent == NULL))
		return (NULL);

	 /* Checks if the current node is the left child of its parent */
	if  (node->parent->left == node)
	{
		return (node->parent->right);
	}
    /* Otherwise the current node is the right child */
	else
	{
		return (node->parent->left);
	}

}
