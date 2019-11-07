#include "mashley.h"

void	ft_tetadd(t_etris **alst, t_etris *new)
{
	if (new)
	{
		if (*alst)
		{
			new->next = (*alst);
			(*alst) = new;
		}
		else
			(*alst) = new;
	}
}
