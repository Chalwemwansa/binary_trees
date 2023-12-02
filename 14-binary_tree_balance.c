#include "binary_trees.h"
#define LEFT_HEIGHT 1

/**
 * helper_f - helps measure the balance factor of a tree
 *
 * @tree: the tree in consideration
 * @flag: weather to return min or max
 * Return: the balance factor
 */
int helper_f(const binary_tree_t *tree, int flag)
{
	int sum = 0, tmp = 0;

	if (tree == NULL)
		return (0);
	sum = helper_f(tree->right, flag) + 1;
	tmp = helper_f(tree->left, flag) + 1;
	if (flag == LEFT_HEIGHT)
		return (tmp);
	else
		return (sum);
}

/**
 * binary_tree_balance - gets the balance of a given binary tree
 *
 * @tree: the tree in consideration
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	return (helper_f(tree, 1) - helper_f(tree, 0));
}
