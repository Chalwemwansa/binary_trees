#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a sibling of a node in a binary tree
 *
 * @node: the node to find the sibling for
 * Return: returns th epointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node->parent)->right == NULL || (node->parent)->left == NULL)
		return (NULL);

	if (((node->parent)->right)->n == node->n)
		return ((node->parent)->left);
	return ((node->parent)->right);
}
