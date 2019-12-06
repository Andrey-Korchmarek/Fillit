#include "includes/fillit.h"

void	cg_print_tetris(t_ring *root)
{
	t_dance *print;

	print = (root->current)->right;
	while (print->letter != '!')
	{
		if (ft_isupper(print->down->letter))
			ft_putchar(print->down->letter);
		else
			ft_putchar('.');
		if (print->x != print->right->x)
			ft_putchar('\n');
		print = print->right;
	}
}
