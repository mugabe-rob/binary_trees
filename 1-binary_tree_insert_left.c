#include "binary_trees.h"

/**
 * binary_tree_insert_left - this inserts the node as a left child
 * @parent: the pointer to the node that inserts the left-child
 * @value: a value to store the new node
 * Return: a pointer to the new node
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
