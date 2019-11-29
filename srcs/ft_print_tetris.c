#include "includes/fillit.h"

void	ft_print_tetris(t_dance *map, int n)
{
	int		i;
	int		f;
	t_dance	*head;
	t_dance	*headcol;

	head = map;
	i = 0;
	f = 0;
	while (head != map->right)
	{
		headcol = map->right;
		map = map->right->down;
		while (headcol != map)
		{
			write(1, &map->letter, 1);
			map = map->down;
			f = 1;
		}
		(f != 1) ? write(1, ".", 1) : (f = 0);
		i++;
		(i == n) ? write(1, "\n", 1) : 1;
		i = ((i == n) ? 0 : i);
	}
}
