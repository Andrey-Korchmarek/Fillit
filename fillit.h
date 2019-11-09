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

/*
int	read_and_validation(int fd);
*/

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

typedef struct		s_dance
{
	char 			cell;
	struct s_dance	*left;
	struct s_dance	*right;
	struct s_dance	*up;
	struct s_dance	*down;
}					t_dance;

int	read_and_validation(int fd);
int samples[2][6];

samples = {
	{0,1,1,0,1,1}, {1,0,2,0,3,0}
}


#endif
