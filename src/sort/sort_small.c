/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:00:21 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 16:09:10 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_two(t_stack **a)
{
	if (!*a || !(*a)->next)
		return ;
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	sort_three(t_stack **a)
{
	int	max;

	if (!*a || !(*a)->next)
		return ;
	while (stack_is_sorted(a) != true)
	{
		max = find_max_index(a);
		if (max == (*a)->index)
			ra(a);
		else if ((*a)->index == 0 && max == (*a)->next->index)
		{
			rra(a);
			sa(a);
		}
		else
			sa(a);
	}
	return ;
}
