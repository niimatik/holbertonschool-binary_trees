#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - get the height of the tree
 *
 * @tree: the tree to have the height
 *
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_size - get the size of the binary tree
 *
 * @tree: the tree to size
 *
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: the tree to be checked
 *
 * Return: 1 if perfect or 0 if not or an error
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;
	size_t expected_size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	expected_size = (1 << (height + 1)) - 1;

	return (size == expected_size);
}
