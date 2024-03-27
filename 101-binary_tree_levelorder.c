#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverst a binary tree using
 *                          level-order traverse
 *
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: none
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t l, m;

	if (!tree || !func)
		return;
	m = binary_tree_height(tree) + 1;
	for (l = 1; l <= m; l++)
		btlo_helper(tree, func, l);
}

/**
 * btlo_helper - fun that goes through a binary tree using post-order traverse
 *
 * @tree: tree to traverse
 * @func: the pointer to a function to call for each node
 * @level: level of the tree to call func upon
 *
 * Return: none
 */

void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, level - 1);
		btlo_helper(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - func measures the height of a binary tree
 *
 * @tree: the tree to measure the height of
 *
 * Return: tree hight
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
