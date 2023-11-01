#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: number or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size + 1);
}

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node of tree
 *
 * Return: 0 (NULL) or number
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		full = 1;

	else if (tree->left && tree->right)
	{
		full = binary_tree_is_full(tree->left);

		if (full == 0)
			return (full);

		full = binary_tree_is_full(tree->right);
	}
	else
		full = 0;

	return (full);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 *
 * Return: 0 (NULL) or number
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_s, right_s;
	int full;

	if (!tree)
		return (0);

	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);
	full = binary_tree_is_full(tree);

	if (left_s == right_s && full)
		return (1);
	else
		return (0);
}
