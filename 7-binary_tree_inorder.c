#include "binary_trees.h"

/**
 * binary_tree_inorder - prints a binery tree in order
 * left->root->right
 *
 * @tree: the tree to be traversed
 * @func: the pointer to the function passed as parameter
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
