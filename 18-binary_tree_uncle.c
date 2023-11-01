#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node
 *
 * Return: 0 (NULL) or number
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);

	if (!node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;

	if (!parent->parent->left || !parent->parent->right)
		return (NULL);
	else if (parent->parent->right == parent)
		return (parent->parent->left);
	else if (parent->parent->left == parent)
		return (parent->parent->right);
	else
		return (NULL);
}
