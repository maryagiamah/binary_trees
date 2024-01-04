#include "binary_trees.h"
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
