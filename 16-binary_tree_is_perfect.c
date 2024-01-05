#include "binary_trees.h"
/**
* binary_tree_is_perfect - returns size of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_node = binary_tree_is_perfect(tree->left);
	int right_node  = binary_tree_is_perfect(tree->right);

	if (left_node && right_node)
		return (1);

	return (0);
}
