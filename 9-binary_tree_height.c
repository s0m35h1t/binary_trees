#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height
 *of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 or height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}
