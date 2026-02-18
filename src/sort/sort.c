/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:10:41 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 22:16:04 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort(int ac, t_stack **a, t_stack **b)
{
	// while (stack_is_sorted(a) == false)
	// {
	if (ac == 3)
		sort_two(a);
	else if (ac == 4)
		sort_three(a);
	else if (ac >= 6 && ac <= 8)
		sort_up_to_six(a, b);
	// }
}
