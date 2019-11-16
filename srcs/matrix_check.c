#include "includes/fillit.h"

int matrix_check(matrix *root, t_list *answer)
{
	if (root->current->right == root->current)
		return (1);
	if (root->current->down == root->current)
		return(0);
	if ((ft_lstlen(answer) == root->size * 4))
		return (1);
	return (-1);
}