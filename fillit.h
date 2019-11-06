/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:03:17 by mashley           #+#    #+#             */
/*   Updated: 2019/11/05 16:03:20 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTITLED_FILLIT_H
#define UNTITLED_FILLIT_H

#include "libft/libft.h"
#include "./mashley/mashley.h"
#include "./aelphias/aelphias.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct		s_etris
{
	int				*content;
	char			queue;
	struct s_etris	*next;
}					t_etris;

int	read_and_validation(int fd);

#endif
