#include "binary_trees.h"
/**
* binary_tree_nodes - returns height of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (0);
	return (1 + binary_tree_nodes(tree->right) +
binary_tree_nodes(tree->left));
}
