#include "binary_trees.h"

/**
 * helper_f - gets the size * 2
 *
 * @tree: the treeto get the size of
 * Return: size
 */
size_t helper_f(const binary_tree_t *tree)
{
	size_t size = 0, tmp = 0;

	if (tree != NULL)
	{
		size = helper_f(tree->right) + 1;
		tmp = helper_f(tree->left) + 1;
	}
	return (size + tmp);
}
/**
 * binary_tree_size - gets the size of the binary tree
 *
 * @tree: the tree to get the size of
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (helper_f(tree) / 2);
}
