/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:03:17 by mashley           #+#    #+#             */
/*   Updated: 2019/11/01 19:03:24 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTITLED_FILLIT_H
#define UNTITLED_FILLIT_H

#include "libft/libft.h"
#include "mashley/mashley.h"
#include "aelphias/aelphias.h"
#include <stdio.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int	read_and_validation(int fd);

#endif //UNTITLED_FILLIT_H
