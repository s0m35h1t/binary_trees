#include "binary_trees.h"

/**
* binary_tree_insert_left - a function that inserts a node as
*a left-child of another in a binary tree.
* @parent: A pointer to the node to insert the left-child in.
* @value: The value to put in the new node.
*
* Return: NULL or a pointer to the new node.
*
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (!parent)
return (NULL);

new = binary_tree_node(parent, value);
if (!new)
return (NULL);

if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}
parent->left = new;

return (new);
}
