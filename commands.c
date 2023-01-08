/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:42:10 by stunca            #+#    #+#             */
/*   Updated: 2022/10/20 22:56:00 by stunca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_elem(long int a)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	elem->data = a;
	elem->next = NULL;
	return (elem);
}

void	put_back(t_list **list, long int a)
{
	t_list	*new_elem;
	t_list	*tmp;

	if (a > 2147483647 || a < -2147483648)
		ft_exit();
	if (*list)
	{
		new_elem = create_elem(a);
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_elem;
	}
	else
		*list = create_elem(a);
}

static void	ft_hard_atoi(char *argv, int *i, int *n)
{
	while (argv[*i] == ' ' && argv[*i] != '\0')
		++*i;
	if (argv[*i] == '-' || argv[*i] == '+')
	{
		if (argv[*i] == '-')
			(*n) *= -1;
		++*i;
	}
	if (!ft_isdigit(argv[*i]))
		ft_exit();
}

void	ft_creat_one(t_list **list_a, char *argv)
{
	int			i;
	long int	res;
	int			n;

	i = 0;
	res = 0;
	n = 1;
	while (argv[i] != '\0')
	{
		ft_hard_atoi(argv, &i, &n);
		while (argv[i] != ' ' && (argv[i] >= '0' && argv[i] <= '9')
			&& argv[i] != '\0')
		{
			res = res * 10 + argv[i] - '0';
			i++;
		}
		res = res * n;
		put_back(list_a, res);
		res = 0;
		n = 1;
	}
}

void	ft_array_add(t_list **list_a, int *array)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *list_a;
	while (tmp != NULL)
	{
		array[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
}
