#include "binary_trees.h"

/**
 * binary_tree_preorder - prints the contents of the binary tree
 * in preorder which is root->left->right
 *
 * @tree: the tree to be printed
 * @func: the function to call for every traversal
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
