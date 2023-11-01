#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: pointer to root node of tree
 *
 * Return: number or 0 (NULL)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		num_leaves += 1;

	num_leaves += binary_tree_leaves(tree->left);
	num_leaves += binary_tree_leaves(tree->right);

	return (num_leaves);
}
