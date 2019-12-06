#include "includes/fillit.h"

/*
** \brief		Creates a new node which points left and right to itself and
**				head points to a queue of covered nodes from destination list.
** \params	new	The queue of cowered nodes.
*/

static t_cwr	*ft_create_stack_elem(t_list *new)
{
	t_cwr		*tmp;

	tmp = (t_cwr*)malloc(sizeof(t_cwr));
	if (!new)
		return (NULL);
	tmp->right = NULL;
	tmp->head = new;
	return (tmp);
}

/*
** \brief			Creates a new stack node and add it in the end of stack.
** \params	new		The queue of cowered nodes.
**			stack	The head of the stack.
*/

t_cwr			*cg_add_to_stack(t_cwr **stack, t_list *new)//создание элемента стека и добавление
{
	t_cwr	*tmp;//стек хранит в себе очереди скрытых строк

	if (!stack || !new)
		return (NULL);
	tmp = ft_create_stack_elem(new);//создание элемента стека
	if (!tmp)
		return (NULL);
	if (!*stack)
		*stack = tmp;
	else
	{
		tmp->right = *stack;
		*stack = tmp;
	}
	return (*stack);
}