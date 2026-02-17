/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:11:42 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/17 18:29:15 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	stack_is_sorted(t_stack **a)
{
	if ((*a) == NULL)
		return (1);
	while ((*a)->next)
	{
		if ((*a)->index < (*a)->next->index)
			return (true);
		*a = (*a)->next;
	}
	return (false);
}