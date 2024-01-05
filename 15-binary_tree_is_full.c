#include "binary_trees.h"
/**
* binary_tree_is_full - returns size of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	/* Calculate the heights of left and right subtrees */
	left_node = binary_tree_is_full(tree->left);
	right_node = binary_tree_is_full(tree->right);

	/* Calculate and return the balance factor */
	return (left_node && right_node);
}
