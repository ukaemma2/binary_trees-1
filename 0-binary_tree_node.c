#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL); /* insufficient memory */

	new->n = value;
	new->left = new->right = NULL;
	new->parent = parent;

	if (new->parent == NULL) /* root */
		return new;

	if (new->n < parent->n)
		parent->left = new;
	else
		parent->right = new;

	return new;
}
