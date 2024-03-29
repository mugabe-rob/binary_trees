#include "binary_trees.h"

/**
 * binary_tree_is_root - checking whether a given node is a root
 * @node: the  pointer to the node to check
 * Return: 1 if node is a root, else 0
**/

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
