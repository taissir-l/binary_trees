#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0;
	size_t n = 0;
	size_t p = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	h = binary_tree_height(tree);
	n = binary_tree_size(tree);

	p = (size_t)_pow_recursion(2, h + 1);
	return (p - 1 == n);
}

/**
 * _pow_recursion - function that returns the value of
 *                 x raised to the power of y
 *
 * @x: value to exponentiate
 * @y: power to raise x to
 *
 * Return: value of x to the power of y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
/**
 * binary_tree_size - function to measures the size of a binary tree
 *
 * @tree: tpointer to tre
 *
 * Return: size of the tree, 0 otherwise
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - function to measures the height of a binary tree
 *
 * @tree: poiter to tree
 *
 * Return: height of the tree, 0 otherwise.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
		return (0);

	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (l > r ? l : r);
}
