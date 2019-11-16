#include "includes/fillit.h"

void	matrix_hide_line(t_dance *head, t_list **lines)
{
	while (head->x != -1)
		head = head->right;
	ft_lstadd(lines, ft_lstnew(head, sizeof(head)));
	head->down->up = head->up;
	head->up->down = head->down;
	head = head->right;
	while (head->x != -1)
	{
		head->down->up = head->up;
		head->up->down = head->down;
		head = head->right;
	}
}