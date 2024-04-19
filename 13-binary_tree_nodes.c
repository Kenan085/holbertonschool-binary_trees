#include "binary_trees.h"

/**
 * binary_tree_nodes - a function finds count of nodes in BT
 * @tree: Root
 *
 * Return: Sum of the nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftn = 0;
		size_t rightn = 0;

		if (!tree->left && !tree->right)
		{
			return (0);
		}
		leftn = binary_tree_nodes(tree->left);
		rightn = binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
		{
			return (leftn + rightn + 1);
		}
		else
		{
			return (leftn + rightn);
		}
	}
	return (0);
}
