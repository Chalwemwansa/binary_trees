#include "binary_trees.h"

/**
 * binary_tree_postorder - prints a binary tree in postorder
 * left->right->root
 *
 * @tree: the tree to be traversed
 * @func: the pointer to the function passed as parameter
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
