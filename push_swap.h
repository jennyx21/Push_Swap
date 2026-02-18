/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:11:40 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 15:21:25 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				index;
	int				data;
	struct s_stack	*next;
}					t_stack;

char				find_witespace(char *str);
long				ft_atol(const char *nptr);
void				ft_check_valid(char **numbers, t_stack **stack);
void				ft_indexing(t_stack **stack);
int					find_max_index(t_stack **stack);
int					find_mid_index(t_stack **stack);
int					ft_stacksize(t_stack **stack);
t_stack				*validate_input(int ac, char **av);
void				ft_free_stack(t_stack **stack);
void				ft_free_split(char **str);

void				pb(t_stack **stack_a, t_stack **stack_b);
void				pa(t_stack **stack_b, t_stack **stack_a);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);

bool				stack_is_sorted(t_stack **a);
void				sort_two(t_stack **a);
void				sort_three(t_stack **a);
void				ft_sort(int ac, t_stack **a);

#endif