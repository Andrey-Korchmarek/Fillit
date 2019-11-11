#include "includes/fillit.h"

void ft_add_matrix(matrix *root, char value, int x, int y)
{
	t_dance *prev;
	t_dance *tmp;

	prev = NULL;
	if (!(tmp = (t_dance*)malloc(sizeof(t_dance))))
		return ;
	tmp->letter = value;
	tmp->x = x;
	tmp->y = y;
	if (root->current == NULL)
	{
		root->current = tmp;
		tmp->right = tmp->left = tmp->up = tmp->down = tmp;
	}
	else
	{
		tmp->right = root->current;
		tmp->left = root->current->left;
		root->current->left->right = tmp;
		root->current->left = tmp;
		tmp->up = tmp->down = tmp;
	}
	root->size++;
}