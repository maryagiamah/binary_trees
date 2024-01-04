#include "binary_trees.h"
/**
 * binary_tree_height - returns height of a tree
 * @tree: tree to determine height
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	/* Calculate height of left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_balance - returns size of a tree
* @tree: tree to determine height
*
* Return: height of tree
*/
size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) -
binary_tree_height(tree->right));
}
