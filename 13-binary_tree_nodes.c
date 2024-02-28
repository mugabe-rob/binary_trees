#include "binary_trees.h"

/**
 * binary_tree_nodes - counting nodes with at least 1 child
 * @tree: the pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL, Else number of nodes
**/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (((tree->left || tree->right) ? 1 : 0) +
			binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
