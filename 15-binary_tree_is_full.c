#include "binary_trees.h"

/**
 * is_full - checks if the binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if full 0 if not and null
 */

int is_full(const binary_tree_t *tree)
{
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->right == NULL && tree->left != NULL) ||
		is_full(tree->left) == 0 || is_full(tree->right) == 0)
		return (0);

	return (1);
}

/**
 * binary_tree_is_full - checks if the binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if full 0 if not and null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full(tree));
}
