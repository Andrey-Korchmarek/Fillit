#include "includes/fillit.h"

void		cg_uncover_and_free(t_cwr **stack, int i)
{
	if (!*stack)
		return ;
	if (i == 1)
	{
		cg_uncover((*stack)->head);
		cg_stack_del_node(stack);
	}
	else
	{
		while (*stack)
		{
			cg_uncover((*stack)->head);
			cg_stack_del_node(stack);
		}
	}
}