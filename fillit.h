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
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct		s_fill
{
	char			**content;
	size_t			turn;
	struct s_fill	*next;
}					t_fill;

int	read_and_validation(int fd);

#endif //UNTITLED_FILLIT_H
