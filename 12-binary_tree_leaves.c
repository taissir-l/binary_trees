#include "binary_trees.h"

/**
 * binary_tree_leaves - fun that counts the leaves in a binary tree
 *
 * @tree: pointe to the tree node
 *
 * Return: number of leaves, 0 otherwise
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
