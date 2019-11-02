/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mashley.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:01:45 by mashley           #+#    #+#             */
/*   Updated: 2019/11/01 19:02:03 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTITLED_MASHLEY_H
#define UNTITLED_MASHLEY_H

# define SHRINKER ( 1.247 )
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char				*ft_strjoinfree(char const *s1, char const *s2,
									int frees1, int frees2);
int					ft_strcount(char *str, char c);
size_t				ft_strplen(const char *str);
int					ft_abs(int n);
int					ft_intlen(int nbr);
size_t				ft_shrinking_gap(size_t gap);
int					*ft_range(int min, int max);
int					validation(char **tetr);
size_t				ft_strrchri(const char *str, int c, size_t count);
int					hard_validation(char *tetr);

#endif //UNTITLED_MASHLEY_H
