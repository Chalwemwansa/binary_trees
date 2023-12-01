#include "binary_trees.h"

/**
 * helper_f - gets the depth
 *
 * @tree: the tree
 * Return: the depth + 1
 */
int helper_f(const binary_tree_t *tree)
{
	int depth = -1;

	if (tree != NULL)
		depth = helper_f(tree->parent) + 1;
	return (depth);
}
/**
 * binary_tree_depth - measures the depth of a node in a tree
 *
 * @tree: pointer to the node to measure the depth of
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	depth = helper_f(tree);
	if (depth == -1)
		return (0);
	else
		return ((size_t)depth);
}
