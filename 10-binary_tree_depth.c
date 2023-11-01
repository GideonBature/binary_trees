#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: pointet to the node
 *
 * Return: number or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_num = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth_num += 1;
		tree = tree->parent;
	}

	return (depth_num);
}
