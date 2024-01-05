#include "binary_trees.h"
/**
* binary_tree_depth - returns height of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}

/**
* binary_tree_size - returns size of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->right) +
binary_tree_size(tree->left));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth, size, max_size;

	depth = binary_tree_depth(tree) + 1;
	size = binary_tree_size(tree);

	max_size = 1;

	while (depth > 0)
	{
		max_size *= 2;
		depth--;
	}

	return (size == max_size);
}
