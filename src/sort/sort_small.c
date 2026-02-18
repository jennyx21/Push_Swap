/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:00:21 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 22:38:58 by jtruckse         ###   ########.fr       */
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
		else if ((*a)->index > (*a)->next->index)
			sa(a);
		else if (max == (*a)->next->index
			&& (*a)->index > (*a)->next->next->index)
			rra(a);
	}
}

void	sort_up_to_six(t_stack **a, t_stack **b)
{
	int	max;
	int	count;

	count = 0;
	max = find_max_index(a);
	while (max > 2)
	{
		if ((*a)->index != count)
			ra(a);
		if ((*a)->index == count)
		{
			pb(a, b);
			count++;
			max--;
		}
	}
	sort_three(a);
	while (count-- > 0)
	{
		pa(b, a);
	}
	return ;
}
