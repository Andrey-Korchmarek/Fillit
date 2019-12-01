#include "includes/fillit.h"

void	cg_stack_del_node(t_cwr **stack)
{
	t_list	*head;
	t_list	*tmp;
	t_cwr	*node;

	head = (t_list*)(*stack)->head;
	if ((*stack)->right == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		node = *stack;
		*stack = (*stack)->right;
		free(node);
	}
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}