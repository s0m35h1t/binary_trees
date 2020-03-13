#include "binary_trees.h"

/**
 * tree_depth - a function that depth of a given node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
 * Return: The depth of node.
 */
size_t tree_depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + tree_depth(tree->parent) : 0);
}

/**
 * get_leaf - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: A pointer to the first leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (((tree->left == NULL && tree->right == NULL) ? 1 : 0))
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_rec - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: Level of current node.
 *
 * Return: 1 or  0.
 */
int is_perfect_rec(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (((tree->left == NULL && tree->right == NULL) ? 1 : 0))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_rec(tree->left, leaf_depth, level + 1) &&
		is_perfect_rec(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 or 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_rec(tree, tree_depth(get_leaf(tree)), 0));
}
