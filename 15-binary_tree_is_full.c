#include "binary_trees.h"
#include <stdbool.h>

/**
 * helper_f - checks if binary tree is full
 *
 * @tree: the bianry tree to be checked
 * Return: 0 if full 1 if not full
 */
int helper_f(const binary_tree_t *tree)
{
	bool flag = true;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	flag = helper_f(tree->right) && helper_f(tree->left);

	return (flag);

}

/**
 * binary_tree_is_full - checks if binary tree if full
 *
 * @tree: the tree in consideration
 * Return: 1 if not full and 0 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (helper_f(tree));
}
