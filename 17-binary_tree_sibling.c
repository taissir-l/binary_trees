#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find the sibling of a node
 *
 * @node: the pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, NULL otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
