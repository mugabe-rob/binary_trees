#include "binary_trees.h"

/**
 * array_to_bst - Building a binary search tree from an array.
 * @array: The pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t counter, j;

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		for (j = 0; j < counter; j++)
		{
			if (array[j] == array[counter])
				break;
		}
		if (j == counter)
		{
			if (bst_insert(&tree, array[counter]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
