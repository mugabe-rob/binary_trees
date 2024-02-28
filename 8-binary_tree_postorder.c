#include "binary_trees.h"

/**
 * binary_tree_postorder - moves through binary tree using post-order traversal
 * @tree: the pointer to the root nodeof the tree to traverse
 * @func: the pointer to a function to call for each node
**/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
