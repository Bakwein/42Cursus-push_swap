/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:45:37 by stunca            #+#    #+#             */
/*   Updated: 2022/10/20 22:45:38 by stunca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_list **left, t_list **right)
{
	t_list	*tmp;

	tmp = *left;
	*left = (*left)->next;
	tmp->next = *right;
	*right = tmp;
}

void	pa_pb(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
	{
		ft_push(list_b, list_a);
		write(1, "pa\n", 3);
	}
	else
	{
		ft_push(list_a, list_b);
		write(1, "pb\n", 3);
	}
}

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
