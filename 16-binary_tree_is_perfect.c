#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - balance
 * @tree: Pointer to the root node of the tree.
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) -
			binary_tree_balance(tree->right));
}

/**
 * perfectt - checks if a subtree is perfect
 * @tree: pointer to the root
 * Return; 1 or 0
 */

int perfectt(const binary_tree_t *tree)
{
	if (tree && !tree->right & !tree->left)
	{
		return (1);
	}
	if (tree && tree->right && tree->left)
	{
		return (1 && perfectt(tree->left) && perfectt(tree->right));
	}
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the three
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_balance(tree) != 0)
		return (0);
	return (perfectt(tree->left) && perfectt(tree->right));

}

