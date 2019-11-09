/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mashley.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:01:45 by mashley           #+#    #+#             */
/*   Updated: 2019/11/02 19:33:17 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTITLED_MASHLEY_H
#define UNTITLED_MASHLEY_H

# define SHRINKER ( 1.247 )

#include "../libft/libft.h"
#include "../fillit.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>

typedef struct		s_etris
{
	int				*content;
	char			queue;
	struct s_etris	*next;
}					t_etris;

char				*ft_strjoinfree(char const *s1, char const *s2,
									int frees1, int frees2);
int					ft_strcount(char *str, char c);
size_t				ft_strplen(const char *str);
int					ft_abs(int n);
int					ft_intlen(int nbr);
size_t				ft_shrinking_gap(size_t gap);
int					*ft_range(int min, int max);
int					simple_validation(char *tetr, int ret);
size_t				ft_strrchri(const char *str, int c, size_t count);
int					hard_validation(char *tetr);
int					check_neig1(char **tetr);
int					check_neig2(char **tetr);
int 				*validation(char *tetr);
int 				*coordinates(char **tetr);
int check_neig(char *tetr);
int	valid_delusion(char *tetr);
void	ft_tetadd(t_etris **alst, t_etris *new);
t_etris	*ft_tetnew(int *content, char queue);

t_etris	*read_and_validation(int fd);

#endif
