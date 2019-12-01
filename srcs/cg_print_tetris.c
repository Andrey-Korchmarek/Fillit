#include "includes/fillit.h"

void	cg_print_tetris(matrix *root)
{
	t_dance *print;

	print = (root->current)->right;
	while (print->letter != '!')
	{
		ft_putchar(print->down->letter);
		if (print->x != print->right->x)
			ft_putchar('\n');
		print = print->right;
	}
}
