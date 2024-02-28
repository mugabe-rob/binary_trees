#include "binary_trees.h"

/**
 * binary_tree_delete - deleting an entire binary tree
 * @tree: the pointer to the root node for the tree to delete
**/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
