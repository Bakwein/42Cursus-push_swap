/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:41:50 by stunca            #+#    #+#             */
/*   Updated: 2022/10/20 22:41:53 by stunca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_sort(t_list **list_a, int argc)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *list_a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
		{
			i = 1;
			break ;
		}
		tmp = tmp->next;
	}
	if (i == 0)
		exit(1);
}

void	ft_check_dup(int argc, int *array)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (array[i] == array[j])
				ft_exit();
			j++;
		}
		i++;
	}
}

int	wordcounter(const char *p, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*p)
	{
		if (*p != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*p == c)
			trigger = 0;
		p++;
	}
	return (i);
}

void	ft_one_check(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (!ft_isdigit(argv[i]) && argv[i] != ' ' && argv[i] != '-'
			&& argv[i] != '+' && argv[i] != '\t' && argv[i] != '\n'
			&& argv[i] != '\r' && argv[i] != '\v' && argv[i] != '\f')
			ft_exit();
		i++;
	}
}
