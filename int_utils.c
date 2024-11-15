/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdella-r <mdella-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:13:51 by mdella-r          #+#    #+#             */
/*   Updated: 2024/01/30 11:08:43 by mdella-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_med(int *tab, t_list *stack)
{
	t_index	index;

	index.size = ft_lstsize(stack);
	if (index.size % 2 == 0)
		index.i = index.size / 2 - 1;
	else
		index.i = index.size / 2;
	index.tmp = index.i / 2;
	return (tab[index.tmp]);
}

int	is_min(t_list *stack)
{
	t_index	index;

	index.tmp = stack->content;
	while (stack)
	{
		if (stack->content < index.tmp)
			index.tmp = stack->content;
		stack = stack->next;
	}
	return (index.tmp);
}

int	is_pre(t_list *stack, int max)
{
	t_index	index;

	index.tmp = LONG_MIN;
	index.i = LONG_MIN;
	index.size = ft_lstsize(stack);
	if (index.size == 1)
		return (-1);
	while (stack)
	{
		if (stack->content > index.tmp && stack->content < max)
		{
			index.tmp = stack->content;
			index.i = stack->index;
		}
		stack = stack->next;
	}
	return (index.i);
}

int	is_max_index(t_list *stack)
{
	t_index	index;

	index.tmp = LONG_MIN;
	index.i = LONG_MIN;
	while (stack)
	{
		if (stack->content > index.tmp)
		{
			index.tmp = stack->content;
			index.i = stack->index;
		}
		stack = stack->next;
	}
	return (index.i);
}

int	is_max(t_list *stack)
{
	int	max;

	max = stack->content;
	while (stack)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}
