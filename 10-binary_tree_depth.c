#include "binary_trees.h"

/**
 * binary_tree_depth - function to count binary tree depth
 *
 * @tree: pointer to the tree
 *
 * Return: numb of nodes, 0 otherwise
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		i += 1;
		tree = tree->parent;
	}
	return (i);
}
