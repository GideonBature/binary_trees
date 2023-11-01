#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
