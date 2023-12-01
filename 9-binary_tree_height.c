#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - finds the height of a binary tree
 *
 * @tree: the tree to find the height for
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sum = -1;

	if (tree != NULL)
	{
		sum = binary_tree_height(tree->left) + 1;
		sum = binary_tree_height(tree->right) + 1;
	}
	return (sum);
}
