#include "includes/fillit.h"

void	ft_danring(t_dance **node)
{
	if ((*node)->right == NULL)
		(*node)->right = *node;
	if ((*node)->left == NULL)
		(*node)->left = *node;
	if ((*node)->up == NULL)
		(*node)->up = *node;
	if ((*node)->down == NULL)
		(*node)->down = *node;
}