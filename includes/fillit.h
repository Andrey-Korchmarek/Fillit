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
# define MASHLEY_FILLIT_H
# define INTMIN ( -2147483648 )
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_dance
{
	char			letter;
	int				x;
	int				y;
	struct s_dance	*left;
	struct s_dance	*right;
	struct s_dance	*up;
	struct s_dance	*down;
}					t_dance;

typedef struct		s_ring
{
	size_t			size;
	t_dance			*current;
}					t_ring;

typedef struct		s_cwr
{
	t_list			*head;
	struct s_cwr	*right;
}					t_cwr;

int					algoritm_x(t_dance *goal, t_cwr **stack);
t_ring				*calculation_and_output(int *storage, int tetnom);
int					check_neig1(char **tetr);
int					check_neig2(char **tetr);
int					check_sign(char *tetr);
int					check_tetr(char *tetr);
int					cover_all(t_list **queue, t_dance *goal);
int					cover_cross_row(t_list **queue, t_dance *goal);
int					cover_row(t_dance *rowcvr, t_list **queue);
void				cover_same_letter(t_dance *goal, t_list **queue);
t_ring				*create_matrix(int *storage, int tetrnom, int size);
void				delete_dest_row(t_dance *head);
void				dicycle(t_ring **root, int a, int form, int count);
int					fillit(int fd);
int					*first(char **tetr);
void				ft_bzero(void *b, size_t n);
t_dance				*ft_dannew(char queue, int x, int y);
int					ft_isupper(int c);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list*elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnode(t_ring *root);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				*ft_realloc(void *ptr, size_t newsize);
int					ft_strcount(char *str, char c);
void				ft_strdel(char **as);
char				*ft_strdup(const char *src);
size_t				ft_strlen(const char *str);
size_t				ft_strplen(const char *str);
char				**ft_strsplit(char const *s, char c);
int					*get_coord(int x, int y, int form);
t_ring				*line_generator(char count, int *coordinates);
void				matrix_add_down(t_ring *hat, t_dance *tmp);
void				matrix_add_line(t_ring **root, t_ring *line);
void				matrix_add_right(t_ring *root, t_dance *tmp);
void				matrix_delete(t_ring *root);
t_ring				*matrix_generator(int size);
t_ring				*matrix_new();
void				matrix_print(t_ring *root);
int					min_map(int count);
void				print_tetris(t_ring *root);
int					*read_and_validation(int fd, int *count);
t_cwr				*stack_add(t_cwr **stack, t_list *new);
void				stack_del_node(t_cwr **stack);
t_cwr				*stack_new(t_list *new);
void				uncover(t_list *queue);
void				uncover_and_free(t_cwr **stack, int i);
int					validation(char *tetr);

#endif
