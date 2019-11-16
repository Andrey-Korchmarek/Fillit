#include "includes/fillit.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}