#include "binary_trees.h"

/**
 * binary_tree_uncle - finds an uncle of a node in a binary tree
 *
 * @node: the node to find the uncle for
 * Return: returns the pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *right, *left;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if ((node->parent)->parent == NULL)
		return (NULL);
	right = ((node->parent)->parent)->right;
	left = ((node->parent)->parent)->left;
	if (right == NULL || left == NULL)
		return (NULL);
	if (right->n == (node->parent)->n)
		return (((node->parent)->parent)->left);
	return (((node->parent)->parent)->right);
}
