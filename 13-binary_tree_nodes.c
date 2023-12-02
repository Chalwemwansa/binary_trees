#include "binary_trees.h"

/**
 * helper_f - function that helps count the number of nodes with one child
 *
 * @tree: the tree to be considered
 * Return: the number of nodes with only one child
 */
int helper_f(const binary_tree_t *tree)
{
	int sum = 0, tmp = 0, total = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		sum = helper_f(tree->right) + 1;
		tmp = helper_f(tree->left) + 1;
		total = sum + tmp;
	}
	helper_f(tree->right);
	helper_f(tree->left);

	return (total);
}

/**
 * binary_tree_nodes - counts the number of nodes in the tree
 * with at least one node
 *
 * @tree: the tree to be used for counting
 * Return: the number of nodes that have at least one node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper_f(tree) / 2);
}
