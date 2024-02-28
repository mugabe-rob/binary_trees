#include "binary_trees.h"

/**
 * binary_tree_is_full - checking if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
**/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((!tree->right && !tree->left) ? 1 :
			binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
