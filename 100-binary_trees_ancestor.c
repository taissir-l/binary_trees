#include "binary_trees.h"

/**
 * binary_trees_ancestor - func that finds lowest common ancestor of two nodes
 *
 * @first: pointer to the first node to find the ancestor
 * @second: pointer to the second node to find the ancestor
 *
 * Return: pointer to the ancestor node, Null otherwise
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_f, depth_s;

	if (!first || !second)
		return (NULL);
	depth_f = binary_tree_depth(first);
	depth_s = binary_tree_depth(second);
	while (depth_f > depth_s)
	{
		first = first->parent;
		depth_f--;
	}
	while (depth_s > depth_f)
	{
		second = second->parent;
		depth_s--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - fun that measures the depth of
 *                   a node in a binary tree
 *
 * @tree: the node to calculate the depth of
 *
 * Return: depth of the node, 0 otherwise.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
