#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of a node
* @node: node to find sibling
*
* Return: sibling or NULL 
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p = NULL;

	if (!node || !node->parent)
		return (NULL);
	p = node->parent;

	if (p->left == p->right)
		return (node);
	if (p->left && p->left != node)
		return (p->left);
	if (p->right && p->right != node)
		return (p->right);
	return (NULL);
}
