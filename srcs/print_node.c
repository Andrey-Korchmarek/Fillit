#include "includes/fillit.h"

void	print_node(t_dance *tmp)
{
	ft_putchar(tmp->letter);
	ft_putnbr(tmp->x);
	ft_putnbr(tmp->y);
}