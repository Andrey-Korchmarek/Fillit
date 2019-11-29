#include "includes/fillit.h"

void			ft_uncover(t_list *queue)
{
	t_dance	*row;
	t_dance	*hrow;

	while (queue)
	{
		hrow = (t_dance*)(queue->content);
		row = hrow;
		while (row->right != hrow)
		{
			(row->up)->down = row;
			(row->down)->up = row;
			row = row->right;
		}
		(row->up)->down = row;
		(row->down)->up = row;
		queue = queue->next;
	}
}
