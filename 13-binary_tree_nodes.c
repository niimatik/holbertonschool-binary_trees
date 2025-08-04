#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree)
	{
		l += (tree->left || tree->right) ? 1 : 0;
		l += binary_tree_nodes(tree->left);
		l += binary_tree_nodes(tree->right);
	}
	return (l);
}
