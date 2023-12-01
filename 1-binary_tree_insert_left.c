#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left child of the tree
 *
 * @parent: the pointer to the node to insert the left child in
 * @value: the value to store in the new_node
 * Return: NULL on failure or if parent is NULL, else  pointer to the new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}
