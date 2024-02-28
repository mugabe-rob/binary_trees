#include "binary_trees.h"

/**
 * binary_tree_insert_right - to insert the node as the right-child
 * @parent: a pointer to the node to insert the right child
 * @value: the value to be stored in the new node
 * Return: the pointer to the new node or NULL on failure if parent is NULL
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->right)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
