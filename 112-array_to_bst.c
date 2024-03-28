#include "binary_trees.h"

/**
 * array_to_bst - function that builds a Binary Search Tree from an array
 *
 * @array: A pointer to the first element of the array to be converted
 * @size: number of elements in the array
 *
 * Return: A pointer to the root node
 */

bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
