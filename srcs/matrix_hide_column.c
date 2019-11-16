#include "includes/fillit.h"

void	matrix_hide_column(t_dance *hat, t_list **answer)
{
	while (hat->letter != '@')
		hat = hat->down;
	ft_lstadd(answer, ft_lstnew(hat, sizeof(hat)));
	hat->left->right = hat->right;
	hat->right->left = hat->left;
	hat = hat->down;
	while (hat->letter != '@')
	{
		hat->left->right = hat->right;
		hat->right->left = hat->left;
		hat = hat->down;
	}
}