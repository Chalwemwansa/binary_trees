#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree and
 * returns a pointer to the newly created node
 *
 * @parent: the variable representing the root node
 * @value: the value to put in the root node made
 * Return: a pointer to the new node made
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	return (new_node);
}
