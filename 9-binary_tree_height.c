#include "binary_trees.h"

/**
 * helper_f - gets the height of the tree
 *
 * @tree: the tree in consideration
 * Return: the height
 */

size_t helper_f(const binary_tree_t *tree)
{
	size_t sum = 0, tmp = 0;

	if (tree != NULL)
	{
		sum = helper_f(tree->left) + 1;
		tmp = helper_f(tree->right) + 1;
	}
	return ((sum < tmp) ? tmp : sum);
}
/**
 * binary_tree_height - finds the height of a binary tree
 *
 * @tree: the tree to find the height for
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper_f(tree) - 1);
}
