/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:49:58 by stunca            #+#    #+#             */
/*   Updated: 2022/10/20 22:50:10 by stunca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_function(t_list **list_a, t_list **list_b, int argc, int *array)
{
	ft_check_dup(argc, array);
	ft_check_sort(list_a, argc);
	ft_array_sort(array, argc);
	ft_getting_index(list_a, array, argc);
	ft_go_to_sort(list_a, list_b, argc);
}
