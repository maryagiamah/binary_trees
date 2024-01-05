#include "binary_trees.h"
/**
* binary_tree_nodes - returns height of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree_nodes_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (0);
	return (1 + binary_tree_nodes(tree->right) +
binary_tree_nodes(tree->left));
}

/**
* binary_tree__is_full - returns size of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree__is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int left_node = binary_tree_nodes(tree->left);
	int right_node = binary_tree_nodes(tree->right);

	/* tells if it's a full binary tree */
	return ((left_node + right_node) % 2);
}
