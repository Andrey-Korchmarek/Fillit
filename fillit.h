/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:07:37 by mashley           #+#    #+#             */
/*   Updated: 2019/11/08 11:07:49 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASHLEY_FILLIT_H
#define MASHLEY_FILLIT_H

# include "./Fillit/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_etris
{
	int				*content;
	char			queue;
	struct s_etris	*next;
}					t_etris;

void		safe(t_etris **list, char *tetr, char count);
int			validation(char *tetr);
t_etris		*ft_tetnew(int *content, char queue);
void		ft_tetadd(t_etris **alst, t_etris *new);
char 		*fillit(int fd);

#endif
