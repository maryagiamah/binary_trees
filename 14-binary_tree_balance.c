
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
	return (binary_tree_nodes(tree->left) -
binary_tree_nodes(tree->right));
}
