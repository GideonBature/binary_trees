#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in new node
 *
 * Return: binary tree node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	if (parent)
	{
		new_node->parent = parent;

		if (!parent->left)
			parent->left = new_node;
		else
			parent->right = new_node;
	}
	else
		new_node->parent = NULL;

	return (new_node);
}
