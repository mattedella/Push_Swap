/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdella-r <mdella-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:27:00 by mdella-r          #+#    #+#             */
/*   Updated: 2024/01/29 16:34:21 by mdella-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(char *content)
{
	t_list	*new;
	long	n;

	n = ft_atol(content);
	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = n;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	t = *lst;
	while (t->next != NULL)
		t = t->next;
	t->next = new;
}

void	ft_lstclear(t_list **lst)
{
	if (*lst == NULL || lst == NULL)
		return ;
	if ((*lst)->next != NULL)
		ft_lstclear(&(*lst)->next);
	free(*lst);
	*lst = NULL;
}
