#include "binary_trees.h"

/**
 * array_to_avl - Building an AVL tree from an array.
 * @array: The pointer to the first element of the array to be converted.
 * @size: Number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
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
			if (avl_insert(&tree, array[counter]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
