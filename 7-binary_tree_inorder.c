#include "binary_trees.h"

/**
 * binary_tree_inorder - fun pre order trasversal
 *
 * @tree: root node
 * @func: function to implement on value of each node
 *
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		int a = tree->n;

		binary_tree_inorder(tree->left, func);
		func(a);
		binary_tree_inorder(tree->right, func);
	}
}
