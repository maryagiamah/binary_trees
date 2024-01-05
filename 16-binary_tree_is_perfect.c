
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth = binary_tree_depth(tree);
    size_t size = binary_tree_size(tree);

    size_t max_size = 1;

    while (depth > 0)
    {
        max_size *= 2;
        depth--;
    }

    return (size == max_size);
}
