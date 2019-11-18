#include "includes/fillit.h"

char *matrix_dancing_links(matrix **root)
{
	t_dance *tmp;
	t_list	*answer;
	t_list	*lines;

	answer = ft_lstnew(NULL, 0);
	lines = ft_lstnew(NULL, 0);
	tmp = (*root)->current->right->down;
	//tmp = best_col(root);
	//tmp = tmp->down;
	while (tmp->letter != '@')
	{
		matrix_recur(tmp, root, &answer, &lines);
		tmp = tmp->down;
		continue ;
	}

	return (" Dancing Links");
}