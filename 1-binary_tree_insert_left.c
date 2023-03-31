#include "binary_trees.h"

/**
 * binary_tree_insert_left -function that inserts a node as the left-child of another node
 * @parent:a pointer to the node to insert the left-child in
 * @value:the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}
