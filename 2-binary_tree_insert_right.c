#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child
 * @parent: pointer to node
 * @value: value to store in the new node
 *
 * Return: parent node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->left = NULL;
	new_node->parent = parent;
	new_node->n = value;

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
		new_node->parent = NULL;

	parent->right = new_node;

	return (new_node);
}
