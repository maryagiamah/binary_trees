#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle of a node
* @node: node to find uncle
*
* Return: uncle node or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent
|| !node->parent->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent
->parent));
}