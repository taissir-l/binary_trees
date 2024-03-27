#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert node at left
 *
 * @parent: parent node
 * @value: value stored in the new node
 *
 * Return: the pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
	{
		return (NULL);
	}
	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;
	return (n);
}
