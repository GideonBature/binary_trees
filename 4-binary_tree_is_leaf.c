#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node
 *
 * Return: 1 (success) or 0 (failure)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);

	if ((node->left) && (node->right))
		return (binary_tree_is_leaf(node->left) && binary_tree_is_leaf(node->right));

	return (0);
}
