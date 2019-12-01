/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:32:33 by mashley           #+#    #+#             */
/*   Updated: 2019/12/01 11:37:29 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

t_etris	*ft_tetnew(int *content, char queue)
{
	t_etris	*tmp;

	tmp = (t_etris*)
	
	malloc(sizeof(t_etris));
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
