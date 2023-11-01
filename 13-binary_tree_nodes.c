#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least a child
 * @tree: pointer to root node
 *
 * Return: 0 (NULL) or number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_parent = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		num_parent += 0;
	else
		num_parent += 1;

	num_parent += binary_tree_nodes(tree->left);
	num_parent += binary_tree_nodes(tree->right);

	return (num_parent);
}
