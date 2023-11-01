#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: number or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h_num = 0, right_h_num = 0;

	if (!tree)
		return (0);

	left_h_num = 1, right_h_num = 1;

	if (tree->left)
		left_h_num = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_h_num = 1 + binary_tree_height(tree->right);

	if (left_h_num > right_h_num)
		return (left_h_num);
	else
		return (right_h_num);
}

/**
 * binary_tree_balance - measures balance factor of tree
 * @tree: pointer to the root node
 *
 * Return: 0 (NULL) or number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal;

	if (!tree)
		return (0);

	bal = binary_tree_height(tree->left);
	bal -= binary_tree_height(tree->right);

	return (bal);
}
