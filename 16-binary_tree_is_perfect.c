#include "binary_trees.h"
#include <stdbool.h>

/**
 * helper_f - helps check if binary tree is perfect
 *
 * @tree: the tree to be checked
 * @flag: the flag to see what should be done
 * Return: 1 if perfect
 */
int helper_f(const binary_tree_t *tree, int flag)
{
	int sum = 0, tmp = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		sum = helper_f(tree->right, flag) + 1;
		tmp = helper_f(tree->left, flag) + 1;
	}

	if (flag == 0)
		return (sum + tmp);
	else
		return ((sum != tmp) ? -1 : sum);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 *
 * @tree: the tree to check
 * Return: 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i, size, tmp = 1;

	i = helper_f(tree, 1);
	size = helper_f(tree, 0);
	if (((size / 2) * 2) != size)
		return (0);
	size = size / 2;
	while (i > 0)
	{
		tmp *= 2;
		i--;
	}
	--tmp;
	return (tmp == size);
}
