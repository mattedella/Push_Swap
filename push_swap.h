/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdella-r <mdella-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:21:19 by mdella-r          #+#    #+#             */
/*   Updated: 2024/02/21 11:35:17 by mdella-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_list
{
	long			content;
	int				index;
	struct s_list	*next;
}					t_list;

typedef struct s_index
{
	long	i;
	long	j;
	long	tmp;
	long	size;
}			t_index;

char	**ft_split(char *s, char c);
size_t	ft_strlen(const char *str);
t_list	*ft_lstnew(char *content);
t_list	*ft_lstlast(t_list *lst);
void	push_next(t_list **stack_a, t_list **stack_b, int i);
void	final_sort(t_list **stack_a, t_list **stack_b);
void	who_push_next(t_list **stack_a, t_list **stack_b, int i, int j);
void	set_index(t_list *stack_b);
void	reverse_algo(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
void	freemat(char **matrix);
void	fill_tab(t_list *stack_a, int *tab);
void	push_atob(t_list **stack_a, t_list **stack_b);
void	push_btoa(t_list **stack_a, t_list **stack_b);
void	rotate_a(t_list **stack_a, int f);
void	rotate_b(t_list **stack_b, int f);
void	rev_rotate_a(t_list **stack_a, int f);
void	rev_rotate_b(t_list **stack_b, int f);
void	rev_rotate_r(t_list **stack_a, t_list **stack_b);
void	swap_a(t_list **stack_a, int f);
void	swap_b(t_list **stack_b, int f);
void	simple_algo(t_list **stack_a, t_list **stack_b);
void	algo_four(t_list **stack_a, t_list **stack_b);
void	algo_five(t_list **stack_a, t_list **stack_b);
void	algorithm(t_list **stack_a, t_list **stack_b);
void	check_double(t_list *stack_a);
void	push(t_list **stack_a, t_list **stack_b, int i, int size);
int		ft_lstsize(t_list *lst);
int		ft_exit(int id);
int		*sort_array(t_list *stack_a);
int		get_med(int *tab, t_list *stack);
int		is_min(t_list *stack);
int		is_pre(t_list *stack, int max);
int		is_max(t_list *stack);
int		is_max_index(t_list *stack);
int		is_solved(t_list *stack_a);
int		get_cost_med(t_list *stack_a, int med);
int		get_cost(t_list *stack_a, int i);
int		get_content(t_list *stack, int i);
long	ft_atol(const char *s);

#endif