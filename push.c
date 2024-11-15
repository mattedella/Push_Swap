/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdella-r <mdella-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:12:08 by mdella-r          #+#    #+#             */
/*   Updated: 2024/01/29 16:34:15 by mdella-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_btoa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = tmp;
	write(1, "pa\n", 3);
}

void	push_atob(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	write(1, "pb\n", 3);
}
