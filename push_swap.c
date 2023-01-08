/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:44:47 by stunca            #+#    #+#             */
/*   Updated: 2022/10/20 22:44:57 by stunca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_array_sort(int *array, int argc)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ((argc - 1) - 1))
	{
		while (j < ((argc - 1) - i - 1))
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

static void	ft_create_stack_and_array(int *array,
										t_list **list_a,
										int argc,
										char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		array[j] = ft_atoi(argv[i]);
		put_back(list_a, ft_atoi(argv[i]));
		i++;
		j++;
	}
}

void	ft_getting_index(t_list **list_a, int *array, int argc)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *list_a;
	while (tmp)
	{
		while (i < argc - 1)
		{
			if (tmp->data == array[i])
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
		i = 0;
	}
}

static void	ft_one_arg(t_list **list_a, char *argv, int *array)
{
	ft_one_check(argv);
	ft_creat_one(list_a, argv);
	ft_array_add(list_a, array);
}

int	main(int ac, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		*array;
	int		argc;

	if (ac < 2)
		exit(1);
	if (ac == 2)
	{
		if (argv[1][0] == '\0')
			exit(1);
		argc = 1 + wordcounter(argv[1], ' ');
	}
	else
		argc = ac;
	array = malloc(sizeof(int) * (argc - 1));
	list_a = NULL;
	list_b = NULL;
	if (ac > 2)
		ft_create_stack_and_array(array, &list_a, argc, argv);
	else
		ft_one_arg(&list_a, argv[1], array);
	ft_function(&list_a, &list_b, argc, array);
}
