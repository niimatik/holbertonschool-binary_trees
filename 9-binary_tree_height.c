#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int l = binary_tree_height(tree->left);
		int r = binary_tree_height(tree->right);

		return (l > r ? l : r);
	}
	return (0);
}
