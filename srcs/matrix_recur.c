#include "includes/fillit.h"

void	matrix_recur(t_dance *tmp, matrix **root,
						t_list **answer, t_list **lines)
{
	t_dance	*chosen;
	char 	tetr;

	if (matrix_check(*root, *answer) == 1)
	{
		//matrix_print(*root);
		return ;
	}

	ft_lstadd(lines, ft_lstnew(tmp, sizeof(tmp)));
	while (tmp->left->x != -1)
		tmp = tmp->left;
	while (tmp->x != -1)
	{
		chosen = tmp;
		tmp = tmp->down;
		while (tmp->letter != '@')
		{
			matrix_hide_line(tmp, lines);
			tmp = tmp->down;
		}
		tmp = chosen->right;
	}
	tetr = tmp->letter;
	while (tmp->letter != '!')
	{
		if (tmp->letter == tetr)
			matrix_hide_line(tmp, lines);
		tmp = tmp->down;
	}
	while (chosen->x != -1)
	{
		matrix_hide_column(chosen, answer);
		chosen = chosen->left;
	}
}