#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is a root node
 *
 * @node: the node to be checked
 * Return: 1 if root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
