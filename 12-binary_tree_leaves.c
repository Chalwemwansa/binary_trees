#include "binary_trees.h"

/**
 * helper_f - finds the un altered number of leaves
 *
 * @tree: the tree to count leaves in
 * Return: the number of leaves
 */
int helper_f(const binary_tree_t *tree)
{
	int sum = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	sum += helper_f(tree->left);
	sum += helper_f(tree->right);

	return (sum);
}

/**
 * binary_tree_leaves - counts the number of leaves in in a given binary tree
 *
 * @tree: the tree whose leaves need to be counted
 * Return: the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper_f(tree));
}
