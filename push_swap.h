/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:45:14 by stunca            #+#    #+#             */
/*   Updated: 2022/10/20 22:45:16 by stunca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

int			main(int argc, char *argv[]);
void		ft_getting_index(t_list **list_a, int *array, int argc);
t_list		*create_elem(long int a);
void		put_back(t_list **list, long int a);
void		ft_array_sort(int *array, int argc);
long int	ft_atoi(const char *str);
void		ft_check_dup(int argc, int	*array);
void		ft_check_sort(t_list **list_a, int argc);
void		ft_go_to_sort(t_list **list_a, t_list **list_b, int argc);
void		sort_for_5(t_list **l1, t_list **l2, int argc);
void		sort_for_100(t_list **a, t_list **b, int argc);
void		sort_for_500(t_list **a, t_list **b, int argc);
void		sort_for_3(t_list **l1, t_list **l2);
void		sa_sb_ss(t_list **list_a, t_list **list_b, char c);
void		ra_rb_rr(t_list **list_a, t_list **list_b, char c);
void		rra_rrb_rrr(t_list **list_a, t_list **list_b, char c);
void		pa_pb(t_list **list_a, t_list **list_b, char c);
void		sort_for_3(t_list **l1, t_list **l2);
void		ft_creat_one(t_list **list_a, char *argv);
int			wordcounter(const char *p, char c);
void		ft_array_add(t_list **list_a, int *array);
void		ft_one_check(char *argv);
int			ft_isdigit(int c);
void		ft_exit(void);
void		ft_function(t_list **list_a, t_list **list_b, int argc, int *array);
#endif
