#include "includes/fillit.h"

void	matrix_recur(t_dance *tmp, matrix **root,
						t_list **answer, t_list **lines)
{
	if (matrix_check(*root, *answer) == 1)
		return ;
	ft_lstadd(lines, ft_lstnew(tmp, sizeof(tmp)));

}