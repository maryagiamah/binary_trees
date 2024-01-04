#include "binary_trees.h"
/**
* binary_tree_inorder - tranverse and prints all num in a tree
* using in-order transversal
* @tree: tree to tranverse
* @func: func pointer to print function
*
* Return: Void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
