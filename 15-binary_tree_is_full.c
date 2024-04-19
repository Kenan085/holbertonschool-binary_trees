#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree:  a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0, otherwise return 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftn, rightn;

	leftn = tree->left;
	rightn = tree->right;
	if (tree == NULL)
	{
		return (0);
	}
	if (leftn == NULL && rightn == NULL)
	{
		return (1);
	}
	return (binary_tree_is_full(leftn) && binary_tree_is_full(rightn));
}
