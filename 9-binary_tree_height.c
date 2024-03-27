#include "binary_trees.h"

/**
 * binary_tree_height -function to  calculate the height of a binary tree
 *
 * @tree: pointer to the tree root node.
 *
 * Return: height, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lef > rig) ? lef : rig);
	}

	return (0);
}
