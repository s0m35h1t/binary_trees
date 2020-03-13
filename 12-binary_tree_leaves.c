#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: nbr of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t le = 0;

	if (tree)
	{
		le += (!tree->left && !tree->right) ? 1 : 0;
		le += binary_tree_leaves(tree->left);
		le += binary_tree_leaves(tree->right);
	}
	return (le);
}
