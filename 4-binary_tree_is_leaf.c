#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether the node is a leaf
 * @node: the pointer to the node to check
 * Return: 1 if node is a leaf, else 0
**/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
