#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The new node value.
 * Return: NULL or a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
