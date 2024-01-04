#include "binary_trees.h"
/**
* binary_tree_preorder - tranverse and prints all num in a tree
* using pre-order transversal
* @tree: tree to tranverse
* @func: func pointer to print function
*
* Return: Void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left);
        binary_tree_preorder(tree->right);
}
