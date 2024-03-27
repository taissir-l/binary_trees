#include "binary_trees.h"

/**
 * binary_tree_preorder - fun pre order trasversal
 *
 * @tree: root node
 * @func: function to implement on value of each node
 *
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
