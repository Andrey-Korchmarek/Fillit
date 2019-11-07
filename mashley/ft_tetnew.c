#include "mashley.h"

t_etris	*ft_tetnew(int *content, char queue)
{
	t_etris	*tmp;

	tmp = (t_etris*)malloc(sizeof(t_etris));
	if (!tmp)
		return (NULL);
	tmp->content = malloc(sizeof(int) * 6);
	if (!tmp->content)
	{
		free(tmp);
		return (NULL);
	}
	ft_memcpy(tmp->content, content, 6);
	tmp->queue = queue;
	tmp->next = NULL;
	return (tmp);
}