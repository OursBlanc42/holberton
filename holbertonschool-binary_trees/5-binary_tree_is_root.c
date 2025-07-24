#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a given node is a root
* @node: is a pointer to the node to check
* Return: 1 if node is a root, otherwise 0 (If node is NULL, return 0)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check special case if Node == NULL */
	if (node == NULL)
		return (0);

	/* Check if the node has no parent (mean it's the root) */
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
