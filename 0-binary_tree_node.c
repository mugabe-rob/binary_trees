#include "binary_trees.h"

/**
 * binary_tree_node - creating a binary tree node
 * @parent: the pointer to the parent node of the node to create
 * @value: the value to put  in the new node
 * Return: the pointer to the new node, or NULL on failure
**/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
