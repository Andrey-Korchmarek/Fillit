#include "includes/fillit.h"

int	cg_fillit(t_dance *goal, t_cwr **stack)
{
	t_list *q;//список для сохранения скрываемых строк
	int cov_res;
	char a;

	if (goal->letter == '!')//угловой узел, рекурсия
		return (1);
	a = goal->letter;//буква
	while (goal->letter == a)//пока строки принадлежат одной тетраминке
	{
		q = NULL;
		if ((cov_res = cg_cover_all(&q, goal)) <
			0)//скрытие строк одноименные + пересечения
			return (-1);
		if (cov_res > 0)
		{
			cg_add_to_stack(stack, q);//сохранение очереди скрытых строк в стеке
			if (cg_fillit(goal->down, stack	) == 1)//рекурсия
				return (1);
			if (cov_res < 2)
				cg_uncover_and_free(stack, 1);
		}
		goal = goal->down;
	}
	return (0);
}