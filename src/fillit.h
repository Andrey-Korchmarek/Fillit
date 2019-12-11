/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:07:37 by mashley           #+#    #+#             */
/*   Updated: 2019/12/11 20:11:41 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H

# include "../libft/libft.h"

int		g_t[19][6];
int		backtrack(int count, int d[26][2], char map[16][17], int a);
void	min_a(int count, int *a);
int		fillit(int fd, int	d[26][2], int *count);
void	gen_map(char map[16][17]);
void	print(int a, char map[16][17]);
int		check_neig1(char **tetr);
int		check_neig2(char **tetr);
int		check_sign(char *tetr);
int		identify_tetr(char *tetr);
int		*first(char **tetr);
int		ft_strcount(char *str, char c);
char	**ft_strsplit(char const *s, char c);
int		validation(char *tetr);
void	clean_map(char map[16][17], int y, int x, int *coord);
void	print(int a, char map[16][17]);

#endif
